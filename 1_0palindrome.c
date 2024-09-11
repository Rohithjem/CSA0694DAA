#include <stdio.h>
#include <string.h>
int palindrome(char s[],int st,int en){
    if(st>=en){
        return 1;
    }
    if(s[st]!=s[en]){
        return 0;
    }
    return (palindrome(s,st+1,en-1));
}
int main(){
    char s[20];
    printf("enter a string: ");
    scanf("%s",s);
    int n;
    n=strlen(s);
    int end=n-1;
    if(palindrome(s,0,end)){
        printf("Palindrome!!");
    }
    else{
        printf("Not palindrome");
    }

}
