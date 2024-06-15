#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float delta, b, a, c, x, y;
	printf("Digite um valor para o a: ");
	scanf("%f", &a);
	printf("Digite um valor para o b: ");
	scanf("%f", &b);
	printf("Digite um valor para o c: ");
	scanf("%f", &c);
	delta = (b*b) - 4 * a * c;
	x = (-b + sqrt(delta))/2*a;
	y = (-b - sqrt(delta))/2*a;
	if(delta>0){
		printf("x1= %f, x2= %f", x, y);
	}
	else{
		printf("Nao existem raizes exatas.");
	}
	return 0;
}