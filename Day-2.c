/*Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)
Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2
Output:
10 30 40 50
*/

#include <stdio.h>

int main() 
{
    int n, pos, i;
    
    //Input the no. of elements in the array    
    scanf("%d", &n);
    int arr[50];
    //Input the elements in the array
    for(i=0;i<n;i++)
    scanf("%d ", &arr[i]);
    //Input the 1-based position to delete
    scanf("%d", &pos);
    
    for(i=pos-1; i<n-1; i++ )
    {
    arr[i] = arr[i+1];
    }
    n--; //decrease the size of the array
    
    //Print the deleted array
    for(i=0;i<n;i++)
    {
    printf("%d ", arr[i]);
    }
    
    return 0;
    
    
}

