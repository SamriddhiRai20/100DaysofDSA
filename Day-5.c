/*Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed */

#include <stdio.h>
int main(){
    int a[100], b[100], n1, n2;

    scanf("%d",&n1);
    for(int i=0; i<n1; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i=0; i<n2; i++){
        scanf("%d",&b[i]);
    }

    for(int i=0; i<n2; i++){
        a[n1]=b[i];
        n1++;
    }
    int temp;
     for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<n1; i++){
        printf("%d ",a[i]);
    }

}
