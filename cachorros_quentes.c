#include <stdio.h>
#include <stdlib.h>

int main(){
    int h, p;
    double media;

    scanf("%d %d", &h, &p);


    media = (float) h / p;
    printf("%.2lf\n", media);

    return 0;
}
