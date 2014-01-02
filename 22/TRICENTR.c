/*
* Based on Euler Line's ratios
*/



#include<stdio.h>
#include<math.h>

double calc_side(double area, double height){
	return 	(2.0000/3.0000)*area/height;
}

double area (double base, double height){
	return 0.5 * base * height; 
}

int main(){

	double a=657.8256599140,b,c;
	double area;
	double dt;

	double c_a=151.6154399062,c_b=213.5392629932,c_c=139.4878846649;

	area = 3.00000000 * 0.500000000 * a * c_a;

	b = calc_side(area,c_b);

	c = calc_side(area,c_c);

	printf("%f %f %f",area,b,c);

	printf(" %.3f\n", (2.00000000/3.000000000) * sqrt(
				(9*a*a*b*b*c*c/(16*area*area))
				-
				(a*a + b*b + c*c )
								));

return 0;
}

