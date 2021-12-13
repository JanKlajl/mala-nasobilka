#include <stdio.h>

int main(void)
{
	//tabulka pro malou násobilku
	for (int j = 1; j <= 10; j++) {
	for (int i = 1; i <= 10; i++) {
		printf("%3d ", i * j);
	}
	printf("\n");
	}
	//mala nasobilka 2
	printf("\n");
	for (int j = 1; j <= 10; j++) {
		for (int i = j; i <= 10 * j; i += j) {
			printf("%3d ", i);
		}
		printf("\n");
	}
	//sikma plocha
	for (int j = 1; j <= 10; j++) {
		for (int i = 1; i <= j; i++) {
			printf("%3d ", i);
		}
		printf("\n");
	}
	printf("\n");
	//sikma plocha obracene
	for (int j = 10; j >= 1; j--) {
		for (int i = 1; i <= j; i++) {
			printf("%3d ", i);
		}
		printf("\n");
	}
}