#include <stdio.h>
#include <stdlib.h>]

int main(void){
    int i, num, maior = 0, cont;

    for(i = 1; i <= 100; i++){

        scanf("%d", &num);

        if(maior < num){
            maior = num;
            cont = i;
        }

    }

    printf("%d\n%d\n", maior, cont);


    return 0;
}
