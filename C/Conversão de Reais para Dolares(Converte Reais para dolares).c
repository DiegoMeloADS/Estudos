#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	float reais,dolares;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a quantidade de reais que voc� possui:R$");
	scanf("%f",&reais);
	
	dolares = reais/4.14;
	
	printf("Voc� tera U$%0.2f\n",dolares);
	
	system("pause");
	return 0;

}
