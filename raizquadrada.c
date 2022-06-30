#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, x1, x2, delta;
	
	printf("Digite o A: ");
	scanf("%f", &a);
	
	printf("Digite o B: ");
	scanf("%f", &b);
	
	printf("Digite o C: ");
	scanf("%f", &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	if (a == 0) {
		printf("Esta equação nao possui raiz real");
	}if (delta < 0){
		printf("Esta equação nao possui raiz real");
	}else{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Delta = %.4f\n", delta);
		printf("X1 = %.4f\n", x1);
		printf("X2 = %.4f", x2);
	}
}

		