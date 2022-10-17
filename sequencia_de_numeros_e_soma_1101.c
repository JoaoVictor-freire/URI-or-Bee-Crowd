#include <stdio.h>
#include <stdlib.h>

int main(void){
     int m, n, soma = 0;
     int i, j;

     while(1){

    scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0){
            break;
        }

        if(m < n){
            for(i = m; i <= n; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
            soma = 0;
        }

        if(n < m){
            for(j = n; j <= m; j++){
                printf("%d ", j);
                soma += j;
            }
            printf("Sum=%d\n", soma);
            soma = 0;
        }
    }

    return 0;
}
