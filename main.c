#include <stdio.h>

int main(void)
{
    float a, b, c, media;
    printf("inserisci i tre voti:");
    scanf("%f %f %f", &a, &b, &c);
    media = (a+b+c)/3;
    printf("%f", media);
}
