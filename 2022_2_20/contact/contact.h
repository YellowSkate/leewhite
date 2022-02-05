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

//通讯录的结构体
typedef struct Contact{
	//PeoInfo data[MAX];
	PeoInfo* data;//存放数据
	int sz;//通讯录中有效信息的个数
	int capacity;//记录当前通讯录的最大容量
}Contact;


//初始化通讯录
void InitContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);

//增加联系人到通讯录
void AddContact(Contact* pc);

//打印通讯录中的信息
void ShowContact(const Contact* pc);

void DeleteContact(Contact* pc);

//保存信息到文件
void SaveContact(Contact* pc);


void LoadContact(Contact* pc);