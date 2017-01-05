/*
 * =====================================================================================
 *
 *       Filename:  pointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/01/2017 00:45:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void consecutiveElements(char arr[], int index, int len){
    if(index > len){
        return;
    }

    char letter = arr[index];
    if(letter == arr[index + 1]){
        consecutiveElements(arr, index + 1, len);
    } else {
        printf("%c", letter);
        consecutiveElements(arr, index + 1, len);
    }
}

int main(){
    char arr[]  = {'a', 'a', 'b', 'a', 'b', 'b', 'c', 'c', 'd'};
    int len     = sizeof(arr)/sizeof(arr[0]);

    consecutiveElements(arr, 1, len);
}
