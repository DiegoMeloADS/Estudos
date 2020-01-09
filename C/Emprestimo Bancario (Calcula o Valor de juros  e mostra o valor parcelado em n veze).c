#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	float empres,juros,x;
	int parce;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o Valor do Emprestimo:R$");
	scanf("%f",&empres);
	
	juros=(empres*20)/100;
	
	printf("A Taxa de Juros é de 20%%\n");
	printf("O valor com juros é de :%0.2f\n",juros+empres);
	printf("Em quantas vezes deseja parcelar?:");
	scanf("%d",&parce);
	
	x=(juros+empres)/parce;
	
	printf("Em %dx de %0.2f \n",parce,x);

	system("pause");
	return 0;

	
}
