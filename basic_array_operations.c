#include <stdio.h>

int findElement(int arr[], int len, int key) {
    for(int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int insertSorted(int arr[], int len, int key, int capacity) {
    if (len >= capacity) {
        return len;
    }

    arr[len] = key;

    return (len+1);
}

int deleteElement(int arr[], int len, int key) {
	int pos = findElement(arr, len, key);

	if (pos == -1) {
		printf("Element not found.");
		return len;
	}

	for(int i = pos; i < len; i++) {
		arr[i] = arr[i+1];
	}

	return (len-1);
}
/*
// Find element
int main() {
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
int main() {
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
