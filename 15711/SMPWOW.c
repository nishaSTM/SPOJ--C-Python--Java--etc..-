#include<stdio.h>

void printWow(int n){
	
	printf("W");

	while(n>0){
		printf("o");
	n--;
	}

	printf("w");

}

int main(){

	int x;
	scanf("%d",&x);

	printWow(x);

return 0;
}
