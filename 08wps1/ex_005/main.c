#include <stdio.h>
#include <string.h>
#define tam_nome 50
#define OK 1

typedef unsigned short int idade;
typedef double salario;
enum sexo_t { M = 0, F = 1 };
typedef enum sexo_t sexo;

struct pessoa_t {
	char m_nome[tam_nome + 1];
	idade m_idade;
	salario m_salario;
	sexo m_sexo;
};
typedef struct pessoa_t pessoa;

int iniciar_pessoa(pessoa *p,const char *p_nome,idade p_idade,salario p_salario,sexo p_sexo);

int main() {
	pessoa p1;
	int d = iniciar_pessoa(&p1, "Ema Monica", 54, 1000, F);
	if (d != OK) {
		printf("Erro %d",d);
		return 0;
	}
	else {
		printf("Nome: %s\n Idade: %d\n Salario: %lf\n Sexo: %s", p1.m_nome, p1.m_idade, p1.m_salario, (p1.m_sexo == M ? "Masculino" : "Feminino"));
	}
	
	return 0;
}

int iniciar_pessoa(pessoa *p,const char *p_nome, idade p_idade, salario p_salario, sexo p_sexo) {
	if (p == NULL ) {
		return -1;
	}
	if ((p_sexo != M) && (p_sexo != F)) {
		return -2;
	}
	if (p_idade < 18) {
		return -3;
	}
	if (p_idade > 95) {
		return -4;
	}
	if (p_salario > 50000) {
		return -5;
	}
	if (p_salario < 500) {
		return -6;
	}
	if (strlen(p_nome) > tam_nome) {
		return -7;
	}
	p->m_idade = p_idade;
	strcpy(p->m_nome,p_nome);
	p->m_salario = p_salario;
	p->m_sexo = p_sexo;
	return 1;
}



