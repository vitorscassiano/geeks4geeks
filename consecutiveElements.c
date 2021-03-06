/*
 * =====================================================================================
 *
 * For a given string delete the elements which are appearing more than once consecutively.
 * All letters are of lowercase.
 *
 * Input:
 *  The first line contains an integer 'T' denoting the total number of test cases.
 *  In each test cases, a string will be inserted.
 *
 * Output:
 *  In each seperate line the modified string should be output.
 *
 * Constraints:
 *  1<=T<=31
 *  1<=length(string)<=100
 *
 * Example:
 * Input:
 *  1
 *  aababbccd
 *
 * Output:
 *  ababcd
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(){

    char arr[]  = {'a', 'a', 'b', 'a', 'b', 'b', 'c', 'c', 'd'};
    int len     = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < len; i++){
        if(arr[i] == arr[i + 1]){
            continue;
        } else if(i == len){
            printf("%c", arr[i]);

        } else {
            printf("%c", arr[i]);
            continue;
        }
    }
}
