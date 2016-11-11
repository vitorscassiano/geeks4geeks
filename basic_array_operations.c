/*
 * =====================================================================================
 *
 *       Filename:  findElement.c
 *
 *    Description:  find
 *
 *        Version:  1.0
 *        Created:  10/11/2016 23:22:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int findElement(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++){
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int insertSorted(int arr[], int n, int key, int capacity)
{
    if (n >= capacity)
    {
        return n;
    }

    arr[n] = key;

    return (n+1);
}

int deleteElement(int arr[], int n, int key)
{
	int pos = findElement(arr, n, key);
	
	if (pos == -1)
	{
		printf("Element not found");
		return n;
	}

	for(int i = pos; i < n; i++)
	{
		arr[i] = arr[i+1];
	}

	return (n-1);
}
/*
// Find element
int main()
{
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 40;
    int position = findElement(arr, n, key);

    if (position == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position %d: ", position);
    }
    return 0;

}

*/
/*
// Insert element
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 6;
    int i, key = 26;

    printf("\nBefore Insertion: ");
    for (i=0; i<n; i++)
        printf("%d  ", arr[i]);

    // Inserting key
    n = insertSorted(arr, n, key, capacity);

    printf("\nAfter Insertion: ");
    for (i=0; i<n; i++)
        printf("%d  ",arr[i]);

    return 0;
}
*/

// Delete element
int main()
{
	int i;
	int arr[] = {10, 50, 30, 40, 20};

	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 30;

	printf("Array before deletion\n");
	for (i=0; i<n; i++)
		printf("%d  ", arr[i]);

	n = deleteElement(arr, n, key);

	printf("\n\nArray after deletion\n");
	for (i=0; i<n; i++)
		printf("%d  ", arr[i]);

}
