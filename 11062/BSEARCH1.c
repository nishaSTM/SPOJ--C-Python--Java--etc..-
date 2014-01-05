#include<stdio.h>
#include<stdlib.h>

int bsearch1(int array[], int start, int end, int data){
        
                if(start > end)
                        return -1;

                int middle = start + end ;
                                middle = middle / 2 ;

                if(array[middle]<data)
                        return bsearch1(array,middle+1,end,data);

                if(array[middle]>data)
                        return bsearch1(array,start,middle-1,data);
                


	while((middle!=-1)&&(array[middle]==data)){

		middle--;

	}

return middle+1;        
}


int main(){

	int n,q,query;

	scanf("%d %d",&n,&q);

	int *array = (int*) malloc (n*sizeof(int));

	int _n;

	for(_n = 0;_n<n;_n++)
		scanf("%d",&array[_n]);

	while(q>0){
		
		scanf("%d",&query);
		printf("%d\n",bsearch1(array,0,n,query));

	q--;
	}

return 0;
}

