#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
double a11,a12,a13,a21,a22,a23,a31,a32,a33,c11,c12,c13,c21,c22,c23,c31,c32,c33,det,cont;
int main(){
	do{
	system("cls");
	printf("\nEntre os valores dos coeficientes da matriz A na ordem a11,a12,a13...:\n");
	printf("\nEntre com o valor de a11:\n");
	scanf("%lf", &a11);
	printf("\nEntre com o valor de a12:\n");
	scanf("%lf", &a12);
	printf("\nEntre com o valor de a13:\n");
	scanf("%lf", &a13);
	printf("\nEntre com o valor de a21:\n");
	scanf("%lf", &a21);
	printf("\nEntre com o valor de a22:\n");
	scanf("%lf", &a22);
	printf("\nEntre com o valor de a23:\n");
	scanf("%lf", &a23);
	printf("\nEntre com o valor de a31:\n");
	scanf("%lf", &a31);
	printf("\nEntre com o valor de a32:\n");
	scanf("%lf", &a32);
	printf("\nEntre com o valor de a33:\n");
	scanf("%lf", &a33);
	det=((a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32))-((a13*a22*a31)+(a11*a23*a32)+(a12*a21*a33));
	c11=(a22*a33-a32*a23)/det;
	c12=(-1)*(a12*a33-a32*a13)/det;
	c13=(a12*a23-a22*a13)/det;
	c21=(-1)*(a21*a33-a31*a23)/det;
	c22=(a11*a33-a13*a31)/det;
	c23=(-1)*(a11*a23-a13*a21)/det;
	c31=(a21*a32-a22*a31)/det;
	c32=(-1)*(a11*a32-a31*a12)/det;
	c33=(a11*a22-a21*a12)/det;
	if(det==0)
	printf("Nao ha inversa para essa matriz.");
	else
	printf("\nA matriz A^(-1) inversa sera = \n|%lf %lf %lf|\n|%lf %lf %lf|\n|%lf %lf %lf|\n",c11,c12,c13,c21,c22,c23,c31,c32,c33);
	printf("\nSe deseja reutilizar o programa entre 1, caso deseje sair entre 2.\n");
	scanf("%lf",&cont);
	}while(cont==1);
	printf("\nVoce saiu do programa entre qualquer tecla para prosseguir.\n");
	getch();
	return 0;
}
