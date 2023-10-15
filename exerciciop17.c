#include <stdio.h>
#include <locale.h>

int main() {
	   setlocale (LC_ALL, "Portuguese");
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int resultado[3][3];

    int ra;

    scanf("%d", &ra);
    int i, j;
    if (ra % 2 == 0) {
        printf("Resultado da soma das duas matrizes:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                resultado[i][j] = matriz1[i][j] + matriz2[i][j];
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Resultado da subtração das duas matrizes:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                resultado[i][j] = matriz1[i][j] - matriz2[i][j];
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

