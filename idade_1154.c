#include <stdio.h>
#include <stdlib.h>

int main(void){
    int soma, idade, cont;
    float med;

    soma = 0;
    idade = 1;
    cont = 0;
    while(idade > 0){

        scanf("%d", &idade);
        if(idade >= 0){
            soma = idade + soma;
            cont = cont + 1;
        }
    }
    med = 1.0 * soma / cont;
    printf("%.2f\n", med);

    return 0;
}
