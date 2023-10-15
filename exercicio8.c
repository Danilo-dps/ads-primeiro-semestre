#include <stdio.h>
#include <locale.h>

int multiplo(int num, int ra) {
	scanf("%d", &ra);
    if (ra % 2 == 0) {
        // Se o RA � par, verificamos se o n�mero � divis�vel por 2
        return num % 2 == 0;
    } else {
        // Se o RA � �mpar, verificamos se o n�mero � divis�vel por 3
        return num % 3 == 0;
    }
}

int main() {
		setlocale (LC_ALL, "Portuguese");
	int ra, num;
    if (multiplo(num, ra)) {
        printf("O n�mero %d � divis�vel pelo divisor correspondente ao RA.\n", );
    } else {
        printf("O n�mero %d n�o � divis�vel pelo divisor correspondente ao RA.\n", ra
    }

    return 0;
}

