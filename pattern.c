#include<stdio.h>
int main()
{
    int input,space,pattern;
    scanf("%d",&input);
    space=input-1;
    pattern=1;
    for(int i=1;i<=(2*input)-1;i++)
    {
        // ekta line
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=pattern;j++)
        {
            if (i%2==0)
            {
               printf("-");
            }
            else{
                printf("#");
            }
            
            
        }
        // line seshe
        if(i<=input-1)
        {
            space--;
            pattern=pattern+2;
        }
        else
        {
            space++;
            pattern=pattern-2;
        }
        printf("\n");
    }
    return 0;
}