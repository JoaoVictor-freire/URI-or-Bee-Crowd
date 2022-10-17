#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vezes, m, j, result;
    int i;

    while(1){
        scanf("%d", &vezes);
        if(vezes == 0){
            break;
        }
        m = j = 0;

        for(i = 0; i < vezes; i++){
            scanf("%d", &result);
            if(result == 0)
                m++;
            if(result == 1)
                j++;
        }

        if(vezes != 0)
            printf("Mary won %d times and John won %d times\n", m, j);
    }
    
    return 0;
}
