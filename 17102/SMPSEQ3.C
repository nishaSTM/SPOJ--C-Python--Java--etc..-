#include<stdio.h>

int bsearch(int array[], int start, int end, int data){
	
		if(start > end)
			return -1;

		int middle = start + end ;
				middle = middle / 2 ;

		if(array[middle]<data)
			return bsearch(array,middle+1,end,data);

		if(array[middle]>data)
			return bsearch(array,start,middle-1,data);
		
		return 1;
	
}


int main(){

	int s_size;
	int q_size;
	
	scanf("%d",&s_size);

	int *s_ = (int*)malloc( s_size * sizeof (int) );

	int s_counter = 0;

	while(s_counter<s_size){
		scanf("%d",&s_[s_counter]);
		s_counter++;	
	}
	
	s_counter=0;

	scanf("%d",&q_size);

	int *q_ = (int*)malloc( q_size * sizeof (int) );

	int q_counter = 0;

	while(q_counter<q_size){
		scanf("%d",&q_[q_counter]);
		q_counter++;
	}	

	while(s_counter<s_size){
                if (bsearch(q_,0,q_size,s_[s_counter])==-1)
			printf("%d ",s_[s_counter]);
                s_counter++;
        }

return 0;
}
