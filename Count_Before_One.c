#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int * arr, int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            
            return count;
        }
        else
        {
            count++;
        }        
    }
    return count;

    
}

int main() {

    int n;
    scanf("%d",&n);
     if (n < 1 || n > 1000) {
        printf("Array size must be less than 1000.\n");
        return 1;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
          if (arr[i] < 0 || arr[i] > 1000) {
            printf("Can not be array data more than 1000.\n");
            return 1;
        }
    }
    int output = count_before_one(arr,n);
    printf("%d",output);

    return 0;
}