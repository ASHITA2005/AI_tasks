/* a simple program that makes a tuple of 5 fruits, makes a copy, and adds another fruit to it */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50][50], c[50][50];
    int i=0;
    printf("enter name of 5 fruits \n");
    for(i=0;i<5;i++){
        scanf("%s",s[i]);
        strcpy(c[i],s[i]);
        
    }
    printf("the list of fruits is \t");
    for(i=0;i<5;i++){
        printf("%s\t",s[i]);
    }
    printf("\nAdd the 6 th fruit to the new list\n");
    scanf("%s",c[i]);
    printf("the new list is\n");
    for(i=0;i<6;i++){
        printf("%s\t",c[i]);
    }

    return 0;
};