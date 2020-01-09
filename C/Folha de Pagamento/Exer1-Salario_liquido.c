#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char nome[100];
	int chapa,filhos,diasN,diasDF,faltas,diasU;
	float SalBase;
	
	printf("Digite seu Nome:\n");
	scanf("%s",&nome);
	
	printf("Digite o Numero da chapa:\n");
	scanf("%d",&chapa);
	
	printf("Digite a quantidade de filhos menores que 13 anos:\n");
	scanf("%d",&filhos);
	
	printf("Digite as Horas Extras em Dias Normais:\n");
	scanf("%d",&diasN);
	
	printf("Digite as Horas Extras de Domingos & Feriados :\n");
	scanf("%d",&diasDF);
	
	printf("Digite o Numero de Faltas :\n");
	scanf("%d",&faltas);
	
	printf("Digite o Numero de Dias Úteis no Mês (Incluso Sábados,Domingos e Feriados):\n");
	scanf("%d",&diasU);
	printf("Digite o Seu Salário Base:\n");
	scanf("%d",&SalBase);
	
	system("pause");
	return 0;
}
