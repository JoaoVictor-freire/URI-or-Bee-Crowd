#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n1, n2, n3, n4, med;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    med = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
    printf("Media: %.1f\n", med);

    if(med >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(med < 5.0){
        printf("Aluno reprovado.\n");
    }else if(med >= 5.0 && med <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &n1); // reutilizando n1 pra guardar a nota do exame pq n1 não vai ser mais usada.
        printf("Nota do exame: %.1f\n", n1);
        med = (med + n1) / 2;

            if(med >= 5){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", med);
            }else if( med <= 4.9){
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", med);
            }

    }


    return 0;
}
