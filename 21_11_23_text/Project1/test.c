#include <stdio.h>

//int main(){
//	signed n = -10;
//	printf("%d\n", n);
//	printf("%u\n", n);
//	//%d ��ӡ����,%u��ӡ�޷�������
//
//}
//
//void test(void){
//	void* p; 
//
//}
//
//int a=10
int main(){
	//int a = ;//  
	//int b = -10;//�۲��������ڴ��еĴ洢;
	int a = 1;
	char* p = (char*)&a;
	if (1 == *p) printf("small");
	else printf("big");
	return 0;
}
