/*

17102. Fun with Sequences
Problem code: SMPSEQ3

You are given a sorted sequence of n integers S = s1, s2, ..., sn and a sorted sequence of m integers Q = q1, q2, ..., qm. Please, print in the ascending order all such si that does not belong to Q.
Input data specification

In the first line you are given one integer 2<=n<=100, and in the following line n integers:
-100 <= si <= 100, si <= si+1.

In the third line you are given one integer 2<=m<=100, and in the following line m integers:
-100 <= qi <= 100, qi <= qi+1.
Output data specification

The sequence of requested integers separated by spaces.
Example

Input:
5
-2 -1 0 1 4
6
-3 -2 -1 1 2 3

Output:
0 4

*/

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
