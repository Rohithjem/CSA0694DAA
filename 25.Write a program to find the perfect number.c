#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int n = 12345;
    int rev = reverse(n, 0);
    printf("Reversed Number is %d\n", rev);
    return 0;
}
