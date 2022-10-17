#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, cont, dias = 0;
    float ckg;

    scanf("%d", &i);

    for(cont = 0; i > cont; cont++){
        scanf("%f", &ckg);

        while(ckg > 1.0){
            ckg = ckg / 2;
            dias += 1;
        }
        printf("%d dias\n", dias);
        dias = 0;

    }

    return 0;
}
