#define _CRT_SECURE_NO_WARNINGS 1bao

//通讯录：
//1. 可以存放1000个人的信息
//2. 人的信息：名字，年龄，电话，住址，性别
//3. 增加联系人
//4. 删除联系人
//5. 查找联系人
//6. 修改联系人
//7. 排序（名字 / 年龄）

#include "contact.h"

enum Oprion{
	EXIT,//0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};
void menu(){
	printf("***************************************\n");
	printf("********     1.add      2.del     *****\n");
	printf("********     3.search   4.modify  *****\n");
	printf("********     5.sort     6.show    *****\n");
	printf("********     0.exit               *****\n");
	printf("***************************************\n");
}

int main(){
	int input = 0;
	Contact con = { 0 };//通讯录
	//初始化通讯录
	InitContact(&con);

	do{
		menu();
		printf("请选选择:>");
		scanf("%d", &input);
		switch (input){
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DeleteContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			//保存信息到文件
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}