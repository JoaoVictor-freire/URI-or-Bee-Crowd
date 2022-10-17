#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num, mt;

    scanf("%f", &num);

    if(num <= 2000.00){
        printf("Isento\n");
    }else if(num > 2000.01 && num <= 3000.00){
        mt = (num - 2000) * 0.08;
        printf("R$ %.2f\n", mt);
    }else if(num > 3000.01 && num <= 4500.00){
        mt = (num - 3000.00) * 0.18 + (1000.00 * 0.08);
        printf("R$ %.2f\n", mt); // se passar de 3000 a taxa é de 100 * %8 = 80
    }else if(num > 4500.00){
        mt = (num - 4500.00) * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08);
        printf("R$ %.2f\n", mt); // se passar de 4500 a taxa é de 1500 * 18% = 270
    }

    return 0;
}
