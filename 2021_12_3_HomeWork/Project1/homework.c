#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//unsigned int My_strlen(const char* string){
//	assert(string!=NULL);
//	unsigned int len = 0;
//	int i = 0;
//	while(*string++!='\0'){
//		len++;
//	}
//	return len;
//
//
//}
//int main(){
//	char a[] = "asd";
//	int i = 0;
//	i = My_strlen(a);
//	printf("%d", i);
//	return 0;
//
//}


//char* My_strcpy(char* dest,const char *src){
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++){
//	}
//	return ret;
//}
//int main(){
//	char a[20] = { 0 };
//	char b[] = "hello";
//	printf("%s\n", My_strcpy(a, b));
//	return 0;
//}

/*
��Ŀ:��������ʹ����ȫ����λ��ż��ǰ�档
˼·��
1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
2. ѭ������һ�²���
a.���left��right��ʾ������[left, right]��Ч������b���������ѭ��
b.left��ǰ�����ң��ҵ�һ��ż����ֹͣ
c.right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
d.���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��
*/
//void swap_arr(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//
//	while (left < right)	{
//		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//		while ((left < right) && (arr[left] % 2 == 1))		{
//			left++;
//		}
//
//		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//		while ((left < right) && (arr[right] % 2 == 0))		{
//			right--;
//		}
//
//		// ���ż�����������ҵ����������������ݵ�λ��
//		// Ȼ������ң�ֱ������ָ������
//		if (left < right)		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

//void printfYY(int a){
//	int num1 = 1; int num2 = 0;
//	assert(a >= 0);
//	printf("1\n");
//	if (a > 0){					//��C(1,0)��ʼ��ӡ
//		int i = 1,j=0;
//		for (i = 1; i <= a; i++){
//			for (j = 0; j <= i; j++){
//
//			}
//
//		}
//
//	}
//};
//
//
//
//int main(){
//	int a = 0, b = 0, c = 0, d = 0;
//
//}








