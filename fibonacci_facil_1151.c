#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1 = 1, num2 = 0, n;
    int i, aux;

    scanf("%d", &n);

    if(n == 1){
        puts("0");
    }else if(n == 2){
        puts("0 1");
    }else{
        printf("0 1 ");

        for(i = 3; i <= n ; i++){
            aux = num1 + num2;
            num2 = num1;
            num1 = aux;
            printf("%d", aux);
            if(i == n){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }



    return 0;
}
