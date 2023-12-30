/*  a simple program that takes the average of an integer list */
#include <stdio.h>

int main() {
    int a[50],n,i,j,avg=0;
    printf("Enter the number of elements in the list\n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elemnts in the list are \n");
    for(i=0;i<n;i++){
       printf ("%d\t",a[i]);
        avg=avg+a[i];
    }
    avg=avg/n;
    printf("\nthe average of the numbers is %d",avg);
    
    return 0;
};
