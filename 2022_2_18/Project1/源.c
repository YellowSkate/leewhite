#include "head.h"
//int main(){
//	//实现文件的拷贝
//	
//	FILE* fp = fopen("hello.txt", "r");
//	char *a= fgets(a, 99, fp);
//		
//	printf("%s", a); 
//	  a=fgets(a, 99, fp);
//	printf("%s", a);
//	fgets(a, 99, fp);
//	printf("%s", a);
//
//	
//
//	return 0;
//
//}
int main(){
	int a = -10;
	char* p = &a;
	if (*p == 0) printf("big");
	else printf("small");
	return 0;


}