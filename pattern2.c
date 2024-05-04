#include<stdio.h>
int main()
{
    int line;

    scanf("%d",&line);
    int space=line-1;
    int numbers=1;
    for(int i=1;i<=line;i++)

    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = numbers; j > 0; j--)
        {
            printf("%d",j);
        }
        
        space--;
        numbers++;
   
        printf("\n");
    }
    return 0;
}
