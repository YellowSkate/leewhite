#define _CRT_SECURE_NO_WARNINGS 9
#include <stdio.h>

//int zz(int a, int b){
//    while (1){
//        int z = a % b;
//        if (z == 0){
//            return b;
//            break;
//        }
//
//        else{
//
//            a = b;
//            b = z;
//
//        }
//    }
//}
//int main(){
//    int a, b; int c = 0;
//    scanf("%d %d", &a, &b);
//    c = zz(a, b);
//    if (1 == c){// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
//        printf("%d", a * b);
//    }
//    else  printf("%d", a >= b ? a: b);
//    return 0;
//}


//正确代码







//


//判断输出结果
//int main(){
//	char a = -1;					//a 11111111	ff		   
//	signed char b = -1;				//b 11111111	ff		
//	unsigned char c = -1;			//c 11111111	ff		
//	printf("%d %d %d ", a, b, c);		
//	return 0;
//
//}
//

//int main(){
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//#include <Windows.h>
//int main(){
//	unsigned int i;
//	for (i = 9; i >= 0; i--)	{
//		printf("%u\n", i);
//		Sleep(00);
//	}
//
//	return 0;
//}

//#include <float.h>

int main(){
	int n = 9;
	float* p = (float*)&n;
	printf("%d\n", n);
	printf("%d\n", *p);
	printf("%f\n", n);
	printf("%f\n", *p);
	printf("-=-=-=-=-=-=\n");


	*p = 9.0;
	printf("%d\n", n);
	printf("%d\n", *p);
	printf("%f\n", n);
	printf("%f\n", *p);
} 