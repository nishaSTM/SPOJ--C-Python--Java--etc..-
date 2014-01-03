/*
* Least number of rolls needed to produce each outcome at least once
* Based on the formula n/1 + n/2 .... n/n
*/


#include<stdio.h>

float calcFavDice(int n,float div){

	if (n==div)
		return 1.000;
	return n / div + calcFavDice(n,div+1);

}

int main(){

	int t,n;
	
	scanf("%d",&t);
	
	while(t>0){
	
		scanf("%d",&n);
		
		printf("%.2f\n",calcFavDice(n,1.000));

	t--;
	}

return 0;
}

