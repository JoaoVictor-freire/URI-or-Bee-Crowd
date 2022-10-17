#include <stdio.h>
#include <stdlib.h>

int main(void){
      unsigned long long int pt = 1;

    while(pt != -1){
        scanf("%llu", &pt);

        if(pt != -1){
            if(pt > 0){
                printf("%llu\n", pt - 1);
            }else if(pt == 0){
                printf("0\n");
            }else if(pt == -1){
                pt = - 1;
         }
        }
    }



    return 0;
}
