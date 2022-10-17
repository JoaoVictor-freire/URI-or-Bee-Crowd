#include <stdio.h>
#include <stdlib.h>

int main(void){

    int test, div, i, num ,cont, soma;

    scanf("%d", &test);

    cont = 0;
    i = 1;
    while(cont < test){

        scanf("%d", &num);

        div = num / i;

        if(num % i == 0){
            soma = soma + i;
        }else if(soma == num){
                printf("%d eh perfeito\n", num);
            }else if(soma != num){
                      printf("%d nao eh perfeito\n");
                }


        i = i + 1;
        cont = cont + 1;
    }

    return 0;
}
