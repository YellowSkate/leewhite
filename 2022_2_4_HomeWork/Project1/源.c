#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void spin(char* str,int n){
	int len = strlen(str);
	int pos = n % len;
	char tmp[999] = { 0 };
	strcpy(tmp, str + pos);
	strncat(tmp, str, pos);
	strcpy(str, tmp);
}
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
int search(int *Mat ,int Des , int row, int col){
	int i = 0, j = (col - 1);			//�����Ͻǿ�ʼѰ��
	while (j >= 0 && i < row){
		if( *(Mat+(i*col)+j)<Des){
			i++;
		}
		else if (*(Mat+(i * col) + j) > Des){
			j--;
		}
		else return 1;
	}
	return 0;
}
int main(){
	int mat[4][5] = { { 1, 2, 3,4,5 },
						{5,6,7,8,9},
					{10,11,12,13,14},
					{15,16,17,18,19} };
	if (search(mat , 19, 4, 5)) printf("yes\n");
	else printf("no\n");



	return 0;
}