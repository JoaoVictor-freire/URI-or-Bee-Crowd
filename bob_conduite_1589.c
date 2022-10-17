#include <stdio.h>
#include <stdlib.h>

int main(void){
    int r1, r2, med, test, i;

    scanf("%d", &test);

    i = 0;
    while(test > i){

        scanf("%d %d", &r1, &r2);

        med = r1 + r2;
        printf("%d\n", med);
        i = i + 1;
    }


    return 0;
}
