#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    int vetor[20];
    int i;
    for (i = 0; i < 20; i++) {
        vetor[i] = i;
    }
    int ra;
	scanf("%d", &ra);
	
    if (ra % 2 == 0) {
        int max = vetor[0];
        for (i = 1; i < 20; i++) {
            if (vetor[i] < max) {
                max = vetor[i];
            }
        }
        printf("O maior número do vetor é: %d\n", max);
    } else {
        int min = vetor[0];
        for (i = 1; i < 20; i++) {
            if (vetor[i] > min) {
                min = vetor[i];
            }
        }
        printf("O menor número do vetor é: %d\n", min);
    }
    return 0;
}

