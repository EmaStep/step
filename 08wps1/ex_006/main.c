#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char *str1 = NULL, *str2 = NULL;

	str1 = (char*)malloc(11);
	strcpy(str1, "ABCDEFGHIJ");

	str2 = (char*)realloc(str2, 20);

	printf("Endere�o de str1 : %p\n", str1);
	printf("Endere�o de str2 : %p\n", str2);

	str1 = (char*)realloc(str1, 100);

	printf("Novo endere�o de str1 : %p\n", str1);
	printf("Conteudo de str1 : %s\n", str1);
	printf("Endere�o de str2 : %p\n", str2);

	free(str1);
	free(str2);
	return 0;

}


