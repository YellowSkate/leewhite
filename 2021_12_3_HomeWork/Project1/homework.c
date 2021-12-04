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
题目:调整数组使奇数全部都位于偶数前面。
思路：
1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
2. 循环进行一下操作
a.如果left和right表示的区间[left, right]有效，进行b，否则结束循环
b.left从前往后找，找到一个偶数后停止
c.right从后往前找，找到一个奇数后停止
d.如果left和right都找到了对应的数据，则交换，继续a，
*/
//void swap_arr(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//
//	while (left < right)	{
//		// 从前往后，找到一个偶数，找到后停止
//		while ((left < right) && (arr[left] % 2 == 1))		{
//			left++;
//		}
//
//		// 从后往前找，找一个奇数，找到后停止
//		while ((left < right) && (arr[right] % 2 == 0))		{
//			right--;
//		}
//
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
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
//	if (a > 0){					//从C(1,0)开始打印
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

//调整奇数偶数的顺序
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
//杨辉三角
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




//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。


//int main(){
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)   {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//            printf("凶手是：%c", killer);
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

////小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
////
////输入描述：
////输入包含一个整数n(0 ≤ n ≤ 109)
////
////输出描述：
////输出一个整数，即小乐乐修改后得到的数字。
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
////不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
//#include <stdio.h>
//int main(){
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", 1 << n);
//    return 0;
//}

////公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
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