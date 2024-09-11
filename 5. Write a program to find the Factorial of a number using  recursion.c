#include <stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    printf("enter Number: ");
    int num;
    scanf("%d",&num);
    printf("Factorial is: %d",fact(num));
}
