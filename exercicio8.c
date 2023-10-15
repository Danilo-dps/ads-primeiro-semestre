#include <stdio.h>
#include <locale.h>

int multiplo(int num, int ra) {
	scanf("%d", &ra);
    if (ra % 2 == 0) {
        // Se o RA é par, verificamos se o número é divisível por 2
        return num % 2 == 0;
    } else {
        // Se o RA é ímpar, verificamos se o número é divisível por 3
        return num % 3 == 0;
    }
}

int main() {
		setlocale (LC_ALL, "Portuguese");
	int ra, num;
    if (multiplo(num, ra)) {
        printf("O número %d é divisível pelo divisor correspondente ao RA.\n", );
    } else {
        printf("O número %d não é divisível pelo divisor correspondente ao RA.\n", ra
    }

    return 0;
}

