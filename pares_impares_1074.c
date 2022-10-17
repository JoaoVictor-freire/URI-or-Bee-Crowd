#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, test, i;

    scanf("%d", &test);

    for( i = 0; i < test; i = i + 1){

        scanf("%d", &num);

        if(num % 2 == 0 && num != 0){
            printf("EVEN ");
        }
        if( num % 2 != 0){
            printf("ODD ");
        }
        if(num > 0){
            puts("POSITIVE");
        }
        if(num < 0){
            puts("NEGATIVE");
        }
        if(num == 0){
            puts("NULL");
        }
    }


    return 0;
}
