#include <stdio.h>
int armstrong(int num, int n) {
    if (num == 0)
        return 0;
    int digit = num % 10;
    return digit * digit * digit + armstrong(num / 10, n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == armstrong(num, 3)) 
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
