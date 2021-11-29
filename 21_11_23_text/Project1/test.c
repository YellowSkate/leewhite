#include <stdio.h>

//int main(){
//	signed n = -10;
//	printf("%d\n", n);
//	printf("%u\n", n);
//	//%d 打印整形,%u打印无符号整形
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
	//int b = -10;//观察整形在内存中的存储;
	int a = 1;
	char* p = (char*)&a;
	if (1 == *p) printf("small");
	else printf("big");
	return 0;
}
