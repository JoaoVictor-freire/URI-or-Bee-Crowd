#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tea, a, b, c, d, e;
    int cont, i;

    scanf("%d", &tea);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a == tea)
        cont++;
    if(b == tea)
        cont++;
    if(c == tea)
        cont++;
    if(d == tea)
        cont++;
    if(e == tea)
        cont++;

    printf("%d\n", cont);

    return 0;
}

    // SOLUÇÃO DA INTERNET QUE É BOA TBM
/*
int main() {

    int resposta, palpite, contador = 5, acertos = 0;

    scanf("%i", &resposta);

    while (contador--) {

        scanf("%i", &palpite);

        if (resposta == palpite) acertos++;
    }

    printf("%i\n", acertos);

    return 0;
}
*/
