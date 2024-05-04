#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome( char *str ) {
    int i, j;
    for( i = 0, j = strlen(str) - 1; i < j; i++, j-- ) {
        if( str[i] != str[j] ) {
            return 0;
        }
    }
    return 1;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char str[1000];
    scanf("%s", str);
    int answer = is_palindrome(str);
    if (answer == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        
        printf("Not Palindrome\n");}
      
    return 0;
}
