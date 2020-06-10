#include <stdio.h>
#include <math.h>
int progression(int n, int b1, int r){
    if (n>0) return b1 * (pow(r, n-1));
    return 1;
}

int main() {
    printf("%d", progression(5,2,2));
    return 0;
}