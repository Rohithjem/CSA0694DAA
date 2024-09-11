#include <stdio.h>

int isPrime(int n, int i) {
    if (n <= 2) 
        return (n == 2) ? 1 : 0;
    if (n % i == 0) 
        return 0;
    if (i * i > n) 
        return 1;
    return isPrime(n, i + 1);
}

void printPrimes(int n, int current) {
    if (current > n)
        return;
    if (isPrime(current, 2))
        printf("%d ", current);
    printPrimes(n, current + 1);
}

int main() {
    int n = 20;
    printf("Prime numbers up to %d: ", n);
    printPrimes(n, 2);
    printf("\n");
    return 0;
}
