#include<stdio.h>

int main(){

	int t;

	int n,x,y;

	int ai;

	scanf("%d",&t);

	while(t>0){

		scanf("%d",&n);
		scanf("%d",&x);
		scanf("%d",&y);
		
		if(x==1)
			ai=2;
		
		else ai=x;

		while(ai<n){
		if((ai%x==0)&&(ai%y!=0))
			printf("%d ",ai);
		ai =ai+x;
		}
	printf("\n");
	t--;
	}

return 0;
}
