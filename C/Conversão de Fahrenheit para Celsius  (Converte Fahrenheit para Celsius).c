#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	float fah,celsius;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a temperatura em Fahrenheit: F°");
	scanf("%f",&fah);
	
	celsius=(fah-32)*5/9;
	
	printf("A temperatura em Celsius será de : C° %0.3f\n",celsius);
	
	system("pause");
	return 0;

}
