#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num = 0, in = 0, out = 0;
    int n, cont = 1;

    scanf("%d", &n);

    do{
        scanf("%d", &num);
        if(num >= 10 && num <=20){
            in += 1;
        }else{
            out += 1;
        }
        cont += 1;

    }while(n >= cont);

    printf("%d in\n", in);
    printf("%d out\n", out);


    return 0;
}
