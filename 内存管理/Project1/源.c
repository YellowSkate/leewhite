#pragma warning(disable : 4996) 
#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
#include <string.h>
//int main(){
//	int n = 0;
//
//	int* arr = NULL;
//	int tmp = 0;
//	scanf("%d", &n);
//	arr = (int*)malloc(n * sizeof(int));
//	int* cur = arr;
//	int  n1 = n;
//	while (n1--){
//		scanf("%d", &tmp);
//		*cur = tmp;
//		cur ++;
//	
//	
//	}
//	int count = 0;//º∆À„
//	double a = 0;
//	for (int i = 0; i < n-1; i++){
//		int j = 0;
//		if (arr[i] > arr[i + 1]){
//			a += 0.5;
//			for ( j = i + 1; j < n-1; j++){
//				if (arr[j] < arr[j + 1]){
//					a += 0.5;
//					i = j ; break; }
//
//			}
//			if (i >= n) break;
//			
//		}
//	}
//	int pass=floor(a);
//	printf("%d", pass);
//	return 0;
//}
//int main(){
//	int n = 0;
//	
//	scanf("%d", &n);
//	int arr[999] = { 0 };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < n; i++){
//		scanf("%d", &arr[i]);
//	
//	}
//	int count = 0;
//
//	printf("%d ", arr[i]);
//	for (i = 1; i<n; i++){
//		for (j = 0; j < i; j++){
//			if (arr[j] < arr[i]){
//				count++;
//			}
//		}
//		printf("%d ", count);
//		count = 0;
//
//	}
//	
//	return 0;
//}
//typedef struct stu{
//	char name[99];
//	int year;
//	int  m;
//	int day;
//	int num;
//
//}stu;
//int cmp_num(const void* a, const void* b){
//	stu* A = (stu*)a;
//	stu* B = (stu*)a;
//	if (A->year != B->year){
//		return (B->year) - (A->year); // 
//	}
//	else if (A->m != B->m){
//		return (B->m - A->m);
//
//	}
//	else{ return B->day - A->day; }
//
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	stu arr[100] = { 0 };
//	for (i = 0; i < n; i++){
//		char str[99] = { 0 };
//		scanf("%s", str);
//		getchar();
//		scanf("%d %d %d", &(arr[i].year), &(arr[i].m), &(arr[i].day));
//		strncpy(arr[i].name, str,50);
//		arr[i].num = (arr->year) * 10000 + arr->m * 100 + arr->day;
//		
//	}
//	
//	qsort(arr, n, sizeof(arr[0]), cmp_num);
//	for (i = 0; i < n; i++){
//		printf("%s\n", arr[i].name);
//	}
//}
#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
#include <string.h>
int cmp(const void* a, const void* b){
	return *(int*)a - *(int*)b;

}
int main(){
	int arr[1001];
	int n = 0; int k = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i < n + 1; i++){
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), cmp);
	if (k <= 0 || k > n){ printf("NO RESULT"); }
	printf("%d\n", arr[k]);
	return 0;
}