#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

double a,b,x,y,confirm,confirm1,confirm2;

int main(){
    do{
    system("cls");
    do{
    system("cls");
    printf("\nEntre com o valor do coeficiente angular 'a':\n");
    scanf("%lf", &a);
    printf("\nEntre com o valor do coeficiente linear 'b':\n");
    scanf("%lf", &b);
    printf("\nA sua funcao do primeiro grau esta sendo definida atualmente por : %.2lfx+(%.2lf)\nDeseja prosseguir com a calculadora?\n Entre : 1 para sim e 2 para entrar outra funcao.\n", a,b);
    scanf("%lf", &confirm);
    }while(confirm==2);
    
    do{
    system("cls");
    printf("\nEntre com o valor de 'x' para que calculemos o valor da funcao f(x):\n");
    scanf("%lf", &x);
    printf("\n O seu X atualmente vale %.2lf.\nDeseja prosseguir com esse valor de X?\nEntre 1 se sim ou 2 para entrar outro valor para X.\n", x);
    scanf("%lf", &confirm1);
    }while(confirm1==2);
    system("cls");
    y=a*x+b;
    printf("\nO valor da sua funcao f(%.2lf)=%.4lf\n",x,y);
    printf("\nDeseja prosseguir com a calculadora?\n Entre : 1 para sim e 2 para entrar outra funcao.\n");
    scanf("%lf",&confirm2);
    }while(confirm2==1);
}
