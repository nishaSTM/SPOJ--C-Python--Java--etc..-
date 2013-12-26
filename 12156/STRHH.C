/*

12156. Half of the half
Problem code: STRHH

Given a sequence of 2*k characters, please print every second character from the first half of the sequence. Start printing with the first character.
Input

In the first line of input your are given the positive integer t (1<=t<=100) - the number of test cases. In the each of the next t lines, you are given a sequence of 2*k (1<=k<=100) characters.
Output

For each of the test cases please please print every second character from the first half of a given sequence (the first character should appear).
Example

Input:
4
your 
progress 
is 
noticeable

Output:
y
po
i
ntc

*/


#include<stdio.h>
#include<string.h>

void printHalf(char s[]){

	int half = strlen(s) / 2;

	int counter = 0;

	while(counter<half){
		printf("%c",s[counter]);
	counter+=2;
	}
	printf("\n");
}

int main(){

	int t;
	scanf("%d",&t);

	char c[201];

	while(t>0){

		scanf("%s",c);
		printHalf(c);

	t--;
	}

return 0;
}

