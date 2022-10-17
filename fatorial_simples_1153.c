#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, fat;

    scanf("%d", &n);

    for(fat = 1; n > 1; n--){
        fat = fat * n;
    }

    printf("%d\n", fat);

    return 0;
}
