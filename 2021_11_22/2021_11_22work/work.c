#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
int main(){
	int Myprice = 20;
	int WaterPrice = 1;
	int count=0;
	int counts = 0;

	count = Myprice / WaterPrice;//拥有的瓶子
	counts = count;  //喝了几瓶
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
//	//方法2
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