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
typedef struct pessoa_t pessoa, pessoa1, pessoa2[3];


int iniciar_pessoa(pessoa *p,const char *p_nome,idade p_idade,salario p_salario,sexo p_sexo);
int copiar_pessoa(pessoa *p,pessoa1 *m);
int imprime_pessoa(pessoa *p, pessoa1 *m);
int entrada_dados_pessoa(pessoa2 *p, const char *p_nome, idade p_idade, salario p_salario, sexo p_sexo);

int main() {
	pessoa p1;
	pessoa1 p2;
	int d = iniciar_pessoa(&p1, "Ema Monica", 54, 1000, F);
	int c = copiar_pessoa(&p1,&p2);
	int imp = imprime_pessoa(&p1, &p2);

	if ((d != OK) || (c != OK) || (imp != OK)){
		printf("Erro %d",d);
		return 0;
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

int copiar_pessoa(pessoa *p,pessoa1 *m) {
	if (p == NULL) {
		return -1;
	}
	*m = *p;
	return 1;
}

int imprime_pessoa(pessoa *p, pessoa1 *m) {
	if (p == NULL) {
		return -1;
	}
	printf("Nome: %s\n Idade: %d\n Salario: %lf\n Sexo: %s\n", p->m_nome, p->m_idade, p->m_salario, (p->m_sexo == M ? "Masculino" : "Feminino"));
	printf("Nome: %s\n Idade: %d\n Salario: %lf\n Sexo: %s", m->m_nome, m->m_idade, m->m_salario, (m->m_sexo == M ? "Masculino" : "Feminino"));
	return 1;
}

int entrada_dados_pessoa(pessoa2 *p, const char *p_nome, idade p_idade, salario p_salario, sexo p_sexo) {
	printf("Cadastro de Pessoas");

	return 1;
}



