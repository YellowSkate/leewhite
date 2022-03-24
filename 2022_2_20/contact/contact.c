#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//�������
void check_capacity(Contact* pc){
	assert(pc);
	if (pc->sz == pc->capacity){
		PeoInfo* tmp = (PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		if (tmp == NULL){
			printf("check_capacity()::%s\n", strerror(errno));
			return;
		}
		else{
			pc->data = tmp;
			pc->capacity += 2;

			printf("add capacity");
			return ;
		}
	}


}
//���ļ��м�������
void LoadContact(Contact* pc){
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL){
		printf("LoadConta()::%s\n", strerror(errno));
		return;
	}
	PeoInfo buf = { 0 };
	while (fread(&buf, sizeof(PeoInfo), 1, pf)){
		check_capacity(pc);
		pc->data[pc->sz] = buf;
		pc->sz++;
		
	
	}
	fclose(pf);
	pf = NULL;
	return;

}
//��ʼ����ϵ��
void InitContact(Contact* pc){
	assert(pc);
	pc->sz = 0;
	PeoInfo* tmp = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (tmp != NULL){
		pc->data = tmp;
		pc->capacity = DEFAULT_SZ;
		LoadContact(pc);
		return;
	}
	else{
		printf("InitContac()::%s\n", strerror(errno));
		return;
	}


}
void AddContact(Contact* pc){
	assert(pc);
	check_capacity(pc);
	printf("����������:");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������:��ַ");
	scanf("%s", pc->data[pc->sz].addr);
	printf("��������ϵ��ʽ:");
	scanf("%s", pc->data[pc->sz].tele);
	pc->sz++;
	printf("AddContac Succes\n");

}
void ShowContact(const Contact* pc){
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++){
		printf("%-10s\t%-5d\t%-5s\t%-13s\t%-20s\ns",
			pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

int FindByName(const Contact* pc, char name[]){
	int i = 0;
	for (i = 0; i < pc->sz; i++){
		if (strcmp(pc->data[i].name, name) == 0){
			return i;
		}
	}

	return -1;//�Ҳ���
}

void DeleteContact(Contact* pc, char name[]){
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++){
		if (strcmp(name, pc->data[i].name) == 0){
			for (i; i < pc->sz - 1; i++){
				pc->data[i] = pc->data[i + 1];
			}
			pc->sz--;
			printf("DeleteContact success");
			return;
		}

	}
	printf("�Ҳ�����ϵ��");
	return;

}
void SaveContact(Contact* pc){

	//���ļ�
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL){
		printf("SaveContact::%s\n", strerror(errno));
		return ;
	}
	int i = 0;
	while (i < pc->sz){
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	
		i++;
	}
	fclose(pf);
	pf = NULL;

}
void DestroyContact(Contact* pc){
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}