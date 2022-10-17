#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i;

    scanf("%d", &n);

    for(i = 1; n * 4 >= i; i+= 4){
        printf("%d ", i);
        printf("%d ", i + 1);
        printf("%d ", i + 2);
        printf("PUM\n");
    }


    return 0;
}
