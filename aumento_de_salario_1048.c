#include <stdio.h>
#include <stdlib.h>

int main(void){
    float sal;

    scanf("%f", &sal);

    if(sal <= 400.00){
        printf("Novo salario: %.2f\n", sal * 0.15 + sal);
        printf("Reajuste ganho: %.2f\n", sal * 0.15);
        printf("Em percentual: 15 %%\n");
    }else if(sal >= 400.01 && sal <= 800.00){
        printf("Novo salario: %.2f\n", sal * 0.12 + sal);
        printf("Reajuste ganho: %.2f\n", sal * 0.12);
        printf("Em percentual: 12 %%\n");
    }else if(sal >= 800.01 && sal <= 1200.00){
        printf("Novo salario: %.2f\n", sal * 0.10 + sal);
        printf("Reajuste ganho: %.2f\n", sal * 0.10);
        printf("Em percentual: 10 %%\n");
    }else if(sal >= 1200.01 && sal <= 2000.00){
        printf("Novo salario: %.2f\n", sal * 0.07 + sal);
        printf("Reajuste ganho: %.2f\n", sal * 0.07);
        printf("Em percentual: 7 %%\n");
    }else if(sal > 2000.00){
        printf("Novo salario: %.2f\n", sal * 0.04 + sal);
        printf("Reajuste ganho: %.2f\n", sal * 0.04);
        printf("Em percentual: 4 %%\n");
    }


    return 0;
}
