#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	int ano_atual,ano_nasc,idade;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o Ano que estamos: ");
	scanf("%d",&ano_atual);
	
	printf("Digite o ano em que você nasceu: ");
	scanf("%d",&ano_nasc);
	
	idade = ano_atual - ano_nasc;
	
	printf("Sua idade é: %d\n",idade);
	
	system("pause");
	return 0;

}
