#include<stdio.h>

int main()
{
	int arr[10];
	int len = sizeof(arr)/sizeof(int);
	for(int i =0;i<len;i++)
		arr[i] = i*2;
	for(int i = 0;i<len;i++)
		printf("arr[%d]  is %d \n",i,arr[i]);
	return 0;
}


/*
 *  arr[] = {};
 *  arr[10] = {1,2,3,4,5,6,7,8,9,0};
 *  arr[5] = {1,2};
 *  arr[] = {0,4};
 *  arr[10];
 *
 *
 */
