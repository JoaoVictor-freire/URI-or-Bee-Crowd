#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i, m;

    scanf("%d", &n);

    for(i = 1; i <= 10; i += 1){

        m = n * i;

        printf("%d x %d = %d\n", i, n, m);
    }

    return 0;
}
