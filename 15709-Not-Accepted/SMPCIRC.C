/*

15709. Two Circles
Problem code: SMPCIRC

Given two circles: O1 with the center o1 =(xo1, yo1) and a radius r1 and O2 with the center o2 =(xo2, yo2) and radius r2, please compute if O1 is inside O2.
Input description

First t < 1000, the number of test cases. In each of the following t lines, 6 integers: xo1 yo1 r1 xo2 yo2 r2. Where 0 ≤ xo1, yo1, xo2, yo2 ≤ 1000 and 0 < r1, r2 ≤ 1000.
Output description

For each test case print one character:
I, if O1 is inside O2,
E, if O1 is internally tangent to O2,
O, in other cases.
Example

Input:
2
103 104 5 100 100 10
103 104 10 100 100 10

Output:
E
O


*/

#include<math.h>
#include<stdio.h>

int distanceSquare(int x1, int x2, int y1, int y2){

	int _X = x2-x1;
	int _Y = y2-y1;	
	
	return  _X*_X + _Y*_Y ;

}

int diffSquare(int x, int y){

	return (y-x) * (y-x) ;

}

int main(){

	int x1,x2,y1,y2,r1,r2;

	int t;

	scanf("%d",&t);

	while(t>0){

	scanf("%d",&x1);
	scanf("%d",&y1);

	scanf("%d",&r1);

	scanf("%d",&x2);
	scanf("%d",&y2);	

	scanf("%d",&r2);

	if(distanceSquare(x1,x2,y1,y2) <= diffSquare(r2,r1) ){
		if( distanceSquare(x1,x2,y1,y2) == diffSquare(r2,r1) )
			printf("E\n");
		else
			//printf("%f : %f\n",distance(x1,x2,y1,y2),(r2-r1));
			printf("I\n");
	}
	else{
		printf("O\n");
	}
	t--;
	}
return 0;
}

