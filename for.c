#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

int v[5] = {10, 20, 30, 40, 50};
int i, d;
float s = 0;

for (i = 0; i < 5; i++)
{
    s += v[i];
}
printf("Resultado: %.2f.\n", s/5);

for(d = 0; d < 11; d++){
    printf("%d\n", d);
}
}
