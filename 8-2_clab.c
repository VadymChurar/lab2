#include <stdio.h>

double factorial(int n) {
    if (n <= 1) return 1;
    return (factorial(n - 1)*n);
}

double Counting(int n) {
    return factorial(n) / (factorial(5) * factorial(n - 5));
}

int main() {
    printf("%f - .\n", Counting(23));
    return 0;
}