
/* counts the number of characters in a string without using len() */
#include <stdio.h>
int main()
{
    char s[50];
    int i=0,c=0;
    printf("enter a string ");
    gets(s);
    while(s[i]!='\0'){
        c++;
        i++;
    }
    printf("\nthe lenght of the string is %d",c);

    return 0;
};
