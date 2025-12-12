// WAP to print right word star pattern

#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0; i<=5; i++) {
        for(int j=0; j<=n+1-i; j++) {
            printf(" ");
        }
        for(int k=0; k<=i; k++) {
            printf("*");
        }
        printf("\n");
    }
}