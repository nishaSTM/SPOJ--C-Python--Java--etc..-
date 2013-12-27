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

float distance(float x1, float x2, float y1, float y2){

	float _X = x2-x1;
	float _Y = y2-y1;	
	
	return sqrt( _X*_X + _Y*_Y );

}

int main(){

	float x1,x2,y1,y2,r1,r2;

	int t;

	scanf("%d",&t);

	while(t>0){

	scanf("%f",&x1);
	scanf("%f",&y1);

	scanf("%f",&r1);

	scanf("%f",&x2);
	scanf("%f",&y2);	

	scanf("%f",&r2);

	if(distance(x1,x2,y1,y2)+r1<=r2){
		if(distance(x1,x2,y1,y2)+r1 == r2)
			printf("E\n");
		else
			printf("I\n");
	}
	else{
		printf("O\n");
	}
	t--;
	}
return 0;
}

