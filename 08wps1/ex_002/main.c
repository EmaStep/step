#include <stdio.h>
#include <stdint.h>
#define TM 4

int main() {
	int estacoes[TM] = { 22,33,44,55 };
	for (int i = 0; i < TM; i++) {
		printf("Valor na  %da. posicao : %d\n", i + 1, estacoes[i]);
	}
	printf("%p , %p\n", estacoes, estacoes + TM);
	for (int *p = estacoes; p!=(estacoes+TM); ++p) {
		printf(" %d, %p\n", *p,p);
	}
	return 0;
}