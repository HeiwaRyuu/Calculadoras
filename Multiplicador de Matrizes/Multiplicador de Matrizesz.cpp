#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
double a11,a12,a13,a21,a22,a23,a31,a32,a33,b11,b12,b13,b21,b22,b23,b31,b32,b33,c11,c12,c13,c21,c22,c23,c31,c32,c33,cont;
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
	printf("\nEntre os valores dos coeficientes da matriz B na ordem b11,b12,b13...:\n");
	printf("\nEntre com o valor de b11:\n");
	scanf("%lf", &b11);
	printf("\nEntre com o valor de b12:\n");
	scanf("%lf", &b12);
	printf("\nEntre com o valor de b13:\n");
	scanf("%lf", &b13);
	printf("\nEntre com o valor de b21:\n");
	scanf("%lf", &b21);
	printf("\nEntre com o valor de b22:\n");
	scanf("%lf", &b22);
	printf("\nEntre com o valor de b23:\n");
	scanf("%lf", &b23);
	printf("\nEntre com o valor de b31:\n");
	scanf("%lf", &b31);
	printf("\nEntre com o valor de b32:\n");
	scanf("%lf", &b32);
	printf("\nEntre com o valor de b33:\n");
	scanf("%lf", &b33);
	c11=(a11*b11+a12*b21+a13*b31);
	c12=(a11*b12+a12*b22+a13*b32);
	c13=(a11*b13+a12*b23+a13*b33);
	c21=(a21*b11+a22*b21+a23*b31);
	c22=(a21*b12+a22*b22+a23*b32);
	c23=(a21*b13+a22*b23+a23*b33);
	c31=(a31*b11+a32*b21+a33*b31);
	c32=(a31*b12+a32*b22+a33*b32);
	c33=(a31*b13+a32*b23+a33*b33);
	printf("\nA matriz C resultado sera = \n|%lf %lf %lf|\n|%lf %lf %lf|\n|%lf %lf %lf|\n",c11,c12,c13,c21,c22,c23,c31,c32,c33);
	printf("\nSe deseja reutilizar o programa entre 1, caso deseje sair entre 2.\n");
	scanf("%lf",&cont);
	}while(cont==1);
	printf("\nVoce saiu do programa entre qualquer tecla para prosseguir.\n");
	getch();
	return 0;
}
