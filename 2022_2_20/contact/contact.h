#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <stdlib.h>


#define MAX 1000

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

#define DEFAULT_SZ 3

typedef struct PeoInfo{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

//ͨѶ¼�Ľṹ��
typedef struct Contact{
	//PeoInfo data[MAX];
	PeoInfo* data;//�������
	int sz;//ͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//��¼��ǰͨѶ¼���������
}Contact;


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//����ͨѶ¼
void DestroyContact(Contact* pc);

//������ϵ�˵�ͨѶ¼
void AddContact(Contact* pc);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const Contact* pc);

void DeleteContact(Contact* pc);

//������Ϣ���ļ�
void SaveContact(Contact* pc);


void LoadContact(Contact* pc);