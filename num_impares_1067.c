#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, i = 1;

    scanf("%d", &num);

    while(num != i){

        if(num % i != 0 && i % 2 != 0 || i == 1){
            printf("%d\n", i);
        }
        i += 1;
    }

    if(num % 2 != 0){
        printf("%d\n", num);
    }

    return 0;
}
