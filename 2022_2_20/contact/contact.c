#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//检查容量
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
//从文件中加载数据
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
//初始化联系人
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
	printf("请输入名字:");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入:地址");
	scanf("%s", pc->data[pc->sz].addr);
	printf("请输入联系方式:");
	scanf("%s", pc->data[pc->sz].tele);
	pc->sz++;
	printf("AddContac Succes\n");

}
void ShowContact(const Contact* pc){
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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

	return -1;//找不到
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
	printf("找不到联系人");
	return;

}
void SaveContact(Contact* pc){

	//打开文件
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