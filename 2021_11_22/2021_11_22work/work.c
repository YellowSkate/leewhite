#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
int main(){
	int Myprice = 20;
	int WaterPrice = 1;
	int count=0;
	int counts = 0;

	count = Myprice / WaterPrice;//ӵ�е�ƿ��
	counts = count;  //���˼�ƿ
	while (count >1){
		counts += count / 2;
		count = count / 2 + count % 2;

	}
	printf("20 can buy %d water", counts);

	return 0;
}
//int main(){
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����2
//	if (money <= 0)	{
//		total = 0;
//	}
//	else	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}