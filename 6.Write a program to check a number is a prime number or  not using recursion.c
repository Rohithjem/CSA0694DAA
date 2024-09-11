#include <stdio.h>
int isprime(int a,int i){
    if (a<=2){
        return(a==2)? 1:0;
    }
    if(a%i==0){
        return 0;
    }
    if(i*i>a){
        return 1;
    }
    return (isprime(a,i+1));
}

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    if(isprime(num,2)){
        printf("Prime number!");
    }
    else{
        printf("Not prime number");
    }
}
