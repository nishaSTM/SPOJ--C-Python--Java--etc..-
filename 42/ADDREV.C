#include<stdio.h>

int rev(int n){
	int r = 0;
	while(n>0){
		r=r*10;
		r+=n%10;
		n=n/10;
	}
	return r;
}

int main()
{
	int ch,n,n2;
	scanf("%d",&ch);
	
	while(ch>0){
		scanf("%d",&n);
		scanf("%d",&n2);
		printf("%d\n",rev(rev(n)+rev(n2)));
		ch--;
	}	

return 0;
}


