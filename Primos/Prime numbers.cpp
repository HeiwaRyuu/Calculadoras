#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,x;
	scanf("%d",&x);
	for(i=2;i<=x;i++){
		for(j=2;j<=i;j++){
			if(j==i)
				printf("%d ",i);
			if(i%j==0)
				break;
		}
	}
}
