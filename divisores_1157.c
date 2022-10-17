#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, i, div, cont;

    scanf("%d", &num);

    cont = 0;
    div = 1;
    i = 1;
    while(cont <= num){

        div = num / i;

        if(num % i == 0){
            printf("%d\n", i);
        }
        i = i + 1;
        cont = cont + 1;
    }



    return 0;
}
