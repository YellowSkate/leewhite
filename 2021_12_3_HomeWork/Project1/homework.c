#define _CRT_SECURE_NO_WARNINGS 1
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

//��������ż����˳��
//void print(int arr[],int sz){
//	int i = 0;
//	for (i; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void move(int* arr, int sz){
//	int* left = arr;
//	int* right = arr + sz - 1;
//	for (; left < right;){
//		while (left<right && (*left) % 2 == 1){
//			left++;
//		}
//		while (left<right && (*right) % 2 == 0){
//			right--;
//		}
//		if (left < right){
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//
//}
//
//
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//}
//�������
//int main(){
//	int arr[10][10] = { 0 };
//	int i = 0; int j = 0;
//	for (i = 0; i < 10; i++){
//		for (j = 0; j <=i; j++){
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			if (i > 1 && j > 0){
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	
//	}
//
//
//
//	return 0;
//}




//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�


//int main(){
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)   {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//            printf("�����ǣ�%c", killer);
//    }
//    return 0;
//}

//
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a < 5; a++){
//		for (b = 1; b < 5; b++){
//			for (c = 1; c < 5; c++){
//				for (d = 1; d < 5; d++){
//					for (e = 1; e < 5; e++){
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)){
//							if (a + b + c + d + e == 15){
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//
//							}
//						}
//
//
//					}
//				}
//
//			}
//		}
//
//	}
//
//}

////С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1�����ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
////
////����������
////�������һ������n(0 �� n �� 109)
////
////���������
////���һ����������С�����޸ĺ�õ������֡�
//
//
//#include <stdio.h>
//#include <math.h>
//int Change(int a){
//    int sum = 0;
//    int x = 0;
//    int i = 0;
//    for (i = 0; i <= 9; i++){
//        x = a % 10;
//        x = (x % 2 == 0 ? 0 : 1);
//        sum += x * pow(10, i);
//        a = a / 10;
//        if (a == 0) break;
//    }
//
//    return sum;
//}
//int main(){
//    int a = 0;
//    scanf("%d", &a);
//    a = Change(a);
//    printf("%d\n", a);
//    return 0;
//
//
//}
//int Way(int n){
//
//    if (2 == n) return 2;
//    if (1 == n) return 1;
//    if (n > 2){
//        return Way(n - 1) + Way(n - 2);
//    }
//	  return -1;
//
//}
//
//
//int main(){
//    int n = 0;
//    scanf("%d", &n);
//    int sum = Way(n);
//    printf("%d", sum);
//    return 0;
//
//
//
//}
//#include <stdio.h>
//int main(){
//    int arr[50] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int x = 0;
//    for (i = 0; i < n; i++){
//        scanf("%d", &x);
//        arr[i] = x;
//    }
//    scanf("%d", x);
//    for (i = 0; i < n; i++){
//        if (arr[i] == x) continue;
//        printf("&d ", arr[i]);
//    }
//    return 0;
//
//}
////��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ��㡣
//#include <stdio.h>
//int main(){
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", 1 << n);
//    return 0;
//}

////����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//#include <stdio.h>
//int main(){
//    while (1){
//        int arr[7] = { 0 };
//        int max = -1; int min = 999;
//        int i = 0;
//        for (i = 0; i < 7; i++){
//            if (scanf("%d", &(arr[i])) == EOF)return 0;
//        }
//        for (i = 0; i < 7; i++){
//            if (arr[i] > max) max = arr[i];
//            if (arr[i] < min) min = arr[i];
//        }
//        int sum = 0;
//        for (i = 0; i < 7; i++){
//            if (arr[i] == max){ max = -1; continue; }
//            if (arr[i] == min){ min = 999; continue; }
//            sum += arr[i];
//        }
//        printf("%.2f\n", sum / 5.0);
//    }
//    return 0;
//
//
//
//}