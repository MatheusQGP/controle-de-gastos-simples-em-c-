#include<stdio.h>
int main(){
	
	float sal_recebido,total;
	printf("\n informe salario:");
	scanf("%f", &sal_recebido);
	printf("\n informe seus gastos");
	scanf("%f", &total);
	if(sal_recebido>= total)
	{
	printf("\n gastos dentro do orcamento");
	}else 	
	printf("\n orcamento estourado");
	
	return 0;
}


