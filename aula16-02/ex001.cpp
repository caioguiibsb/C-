//versao 1.0
//escreva um algoritimo que solicite duas noatas e ao final apresente
//.1.1) a media aritimetica entre as notas informadas
//1.2) a maior ea menor das notas informadas

#include<stdio.h>
#include<conio.h>
int main()
{
    float soma=0, nota, media, maior, menor;
    int qtdnotas;
    printf("digita a quantidade de notas a serem calculadas: ");
    scanf("%i",&qtdnotas);
    
	for (int i = 1; i <= qtdnotas; i++)
    {
        printf("infome a %i nota nota: ", i);
    scanf("%f", &nota);
    soma = soma + nota;
    
	if(i==1){
		maior = nota;
		menor = nota;
	}
	else if (nota > maior){
	maior = nota;
	}
	else if(nota < menor){
	menor = nota;
	}
}
	media = soma/qtdnotas;
	printf("\na media das notas sao: %.2f", media);
    printf("\nO maior numero e: %.2f eo menor numero e %.2f", maior, menor);
}
