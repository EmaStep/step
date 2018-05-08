#include <stdio.h>
#include <stdint.h>
#define TM 4
double soma = 0;


double f(double*atual, double*history) {
	soma = soma + *atual;

	if (*history > *atual) {
		*history = *atual;
	}
		
	return *history;
}


double percorrer_matriz(double*m, int tam, double*history, double(*f)(double*atual, double*history)) {
	double * end = m + tam;
	double rc = 0;
	for (double *c = m; c != end; ++c) {
		rc = f(c, history);
		
	}
	return rc;
}

int main() {
	double estacoes[TM] = { 2.2,33.5,4.4,5.8 };
	double *n = &estacoes[0];
	
	double k = percorrer_matriz(estacoes,TM,n,f);
	printf("Resultado da função f(que é o menor da matriz) : %f", k);
	
	return 0;
}



