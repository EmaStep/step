#include <stdio.h>
#include <string.h>
#define tam_nome 50

typedef unsigned short int idade;
typedef double salario;
enum sexo_t {M=0,F=1} ;
typedef enum sexo_t sexo;

struct pessoa_t{
	char m_nome[tam_nome + 1];
	idade m_idade;
	salario m_salario;
	sexo m_sexo;
};
typedef struct pessoa_t pessoa;

int main() {
	pessoa p1;
	p1.m_idade = 54;
	strcpy(p1.m_nome, "Ema Monica");
	p1.m_salario = 10999.99;
	p1.m_sexo = F;
	printf("Nome: %s\n Idade: %d\n Salario: %lf\n Sexo: %s", p1.m_nome,p1.m_idade,p1.m_salario,(p1.m_sexo==M?"Masculino":"Feminino"));
	return 0;
}

