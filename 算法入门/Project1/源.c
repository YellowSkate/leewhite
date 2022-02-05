#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//打印形如AABB的完全平方数
//int main(){
//	int i = 1;
//	int n = 0;
//	for (1; n <= 9999; i++){
//		n = i * i;
//		if (n < 1000) continue;
//		int hi = n / 100;
//		int lo = n % 100;
//		if (hi / 10 == hi % 10 && lo / 10 == lo % 10){
//			printf("%d \t", n);
//
//		}
//		
//	
//	}
//
//	return 0;
//}
// 
//int* singleNumbers(int* nums, int numsSize, int* returnSize){
//    int sum = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++){
//        sum ^= nums[i];
//    }
//    int flag = sum & (-sum);
//    int x1 = 0;
//    for (i = 0; i < numsSize; i++){
//        if ((flag & nums[i]) == 0){
//            x1 ^= nums[i];
//        }
//
//    }
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    ret = (int*)realloc(ret, 2 * sizeof(int));
//    ret[0] = x1;
//    ret[1] = x1 ^ sum;
//    *returnSize = 2;
//    return ret;
//}
//int main(){
//    int arr[] = { 1,2,5,2 };
//    int size = 0;
//    int* ret = singleNumbers(arr, 4, &size);
//    return 0;
//
//}


//int main(void){
//	char src[] = "***";
//	char dest[] = "abcdefg";
//	printf("使用 memcpy 前: %s\n", dest);
//	memcpy(dest, src, strlen(src));
//	printf("使用 memcpy 后: %s\n", dest);
//	return 0;
//}

//int main(void){
//	int src[] = {9,8,7};
//	int dest[6] = {0};
//	
//	memcpy(dest, src, sizeof(src));
//	memcpy(dest+2, src, sizeof(src));
//
//	printf("使用 memcpy 后: %s\n", dest);
//	return 0;
//}
//旋转数组
//#include <string.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdlib.h>
//void rotate(int* nums, int numsSize, int k){
//    int x = numsSize % k;
//    int* arr = (int*)malloc(numsSize * 2 * sizeof(int));
//    memcpy(arr, nums, numsSize * sizeof(int));
//    memcpy(arr + numsSize, nums, numsSize * sizeof(int));
//    memcpy(nums, arr + numsSize - x, numsSize * sizeof(int));
//}
//int main(){
//    int arr[] = { 1,2,3,4,5,6,7 };
//    arr[7];
//    rotate(arr,7, 3);
//    return 0;
//
//}
//二分查找
//int search(int* nums, int numsSize, int target){
//    int i = 0;
//    int before = 0;
//    int end = numsSize - 1;
//
//    while (before <= end){
//        int mit = before + ((end - before) >> 1);          //左毕右毕
//        if (nums[mit] < target){
//
//            before = mit + 1;
//
//        }
//        else if (nums[mit] > target){
//
//            end = mit - 1;
//        }
//        else
//            return mit;
//
//    }
//    return -1;
//}
//开区间的二分查找
//int search(int* nums, int numsSize, int target){
//    int i = 0;
//    int before = -1;
//    int end = numsSize;
//    int mit = 0;
//    while (before + 1 != end){
//        mit = before + ((end - before) >> 1);
//        if (nums[mit] !=target){
//            before = mit;
//        }
//        else
//            end = mit;
//    }
//    if (end == numsSize) return -1;
//    if (nums[end] == target) return end;
//    return -1;
//
//
//
//
//}
int firstBadVersion(int n){
    int before = -1;
    int end = n + 1;
    int mit = 0;
    while ((before + 1) != end){
        mit = before + (end - before) / 2;
        if (isBadVersion(mit) == 0){
            before = mit;
        }
        else{
            end = mit;
        }


    }
    return end;

}

int isBadVersion(int bad){
    if (bad >= 4) return 1;
    return 0;
}

int main(){
    firstBadVersion(5);
    return 0;
}