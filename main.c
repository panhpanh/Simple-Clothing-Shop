#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float cost, quantity, discount, total;
	printf("cost: ");
	scanf("%f", &cost);
	printf("quantity: ");
	scanf("%f", &quantity);
	printf("discount: ");
	scanf("%f", &discount);
	if( cost > 0 && quantity > 0 && discount > 0){
		total = cost * quantity * (100 - discount) / 100;
		printf("Price of clothes: %f ", total);
	}
	else {
		printf("cost, quantity and discount > 0");
	}
	return 0;
}
