#include <stdio.h>
#include <math.h>

int main() {
    double n, area, r;

    scanf("%lf", &r);

    n = 3.14159;
    area = pow(r , 2) * n;

    printf("A=%.4f\n", area);

    return 0;
}
