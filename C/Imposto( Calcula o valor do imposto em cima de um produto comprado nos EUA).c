#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	float valor,imposto;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o valor dos produtos:U$");
	scanf("%f",&valor);
	
	imposto=(valor*60)/100;
	
	printf("A Taxa de imposto é de 60%%\n");
	printf("O valor acrescentado em cima do seu produto será de R$%0.2f\n",imposto);
	printf("Totalizando em R$%0.2f\n",valor+imposto);
	
	system("pause");
	return 0;

}
