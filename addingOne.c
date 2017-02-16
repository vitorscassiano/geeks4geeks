/*
 * =====================================================================================
 *
 *       Filename:  addingOne.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/01/2017 22:35:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include<stdio.h>

int addingOne(int arr[], int index)
{
    if(index < 0)
    {
        return -1;
    }

    arr[index]++;
    if(arr[index] > 9)
    {
        arr[index] = 0;
        addingOne(arr, index - 1);
    }
}

int main()
{
    int t;
    int len;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &len);
		int arr[len];
		for (int i = 0; i < len; i++){
			scanf("%d", &arr[i]);
		}

		int index   = 2;
		printf("Array before deletion\n");
		for (int i=0; i < len; i++)
		  printf("%d\n", arr[i]);

		addingOne(arr, index);

		printf("\n\nArray after deletion\n");
		for (int i=0; i < len; i++)
		  printf("%d\n", arr[i]);

		return 0;
	}
}
