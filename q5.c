/*  comparing three values */
#include <stdio.h>

int main() {
    int n1,n2,n3,result ;
    printf("enter the first number \n");
    scanf("%d",&n1);
    printf("enter the second number \n");
    scanf("%d",&n2);
    printf("enter the third number \n");
    scanf("%d",&n3);
    result=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("The largest number is result %d ",result );
    
};
