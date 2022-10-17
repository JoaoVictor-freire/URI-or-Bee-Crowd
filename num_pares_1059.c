#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;

    for(num = 1; num <= 100; num = num + 1){

        if(num % 2 == 0){
            printf("%d\n", num);
        }
    }

    return 0;
}
