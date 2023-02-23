/// Versao 1.0:
// Escrever um algoritmo que solicite duas notas e ao final apresente:
// 1.1) A média aritmética entre as notas informadas
// 1.2) A maior e a menor das notas informadas
// Versao 2.0:
// Solicitar antes ao usuário a quantidade de notas a serem informadas
// Versao 3.0:
// 3.1) Ao final emitir um relatório com todas as notas informadas na ordem em que foram digitadas
// 3.2) Ao final emitir um relatório com todas as notas acima da média
// 3.3) Ao final emitir um relatório com todas as notas abaixo da média

#include<stdio.h>
#include<conio.h>
int main()
{
    float soma=0, media, maior, menor;
    int qtdnotas;
    printf("digita a quantidade de notas a serem calculadas: ");
    scanf("%i",&qtdnotas);

	int nota[qtdnotas];		
    
	for (int i = 1; i <= qtdnotas; i++)
    {
    printf("infome a %i nota nota: ", i);
    scanf("%i", &nota[i]);
    soma = soma + nota[i];
    
	if(i==1){
		maior = nota[0];
		menor = nota[0];
	}
	else if (nota[i] > maior){
		maior = nota[i];
	}
	else if(nota[i] < menor){
		menor = nota[1];
	}
}
	media = soma/qtdnotas;
	printf("\na media das notas sao: %.2f", media);
    printf("\nO maior numero e: %.2f eo menor numero e %.2f", maior, menor);
	printf("\nnotas informadas: ");
	for (int i = 1; i <= qtdnotas; i++)
	{
		printf("\nnota %i: %.2i", i, nota[i]);
	}
	printf("\nnotas acima da media: ");
	for (int i = 1; i < qtdnotas; i++)
	{
		if (nota[i] > media)
		{
			printf("\nnota %i: %.2i", i, nota[i]);
		}
	}

	printf("\nnotas abaixo da media: ");
	for (int i = 1; i < qtdnotas; i++)
	{
		if (nota[i] < media)
		{
			printf("\nnota %i: %.2i", i, nota[i]);
		}
		
	}
	
}
