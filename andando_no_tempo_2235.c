#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 - num2 == 0 || num2 - num3 == 0 || num1 - num3 == 0){
        printf("S\n");
    }else if((num1 + num2) - num3 == 0){
        printf("S\n");
    }else if((num1 + num3) - num2 == 0){
        printf("S\n");
    }else if((num3 + num2) - num1 == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }


    return 0;
}
