#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        


    }
    printf("%d %d", even, odd);
    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    odd_even();

    return 0;
}