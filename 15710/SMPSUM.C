#include<stdio.h>

int sum(int a, int b){

if (b>=a){
	return b*b + sum(a,b-1);
}

return 0;	

}

int main(){

	int a,b;

	scanf("%d%d",&a,&b);

	printf("%d",sum(a,b));

return 0;
}

