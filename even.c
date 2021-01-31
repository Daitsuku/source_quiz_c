#include<stdio.h>

void main(){
    system("cls");

    int e,n,i;
    printf("Please insert number : ");
    scanf("%d",&n);

    n = n/2;
    e=0;
    i=0;

    while(i!=n){
        e=e+2;
        printf("%d ",e);
        n--;
    }
}