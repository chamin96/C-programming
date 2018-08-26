#include <stdio.h>
const double PI=3.14159265;
int main(){
	double radius, circumference, area;

	printf("Enter the radius: ");
	scanf("%lf", &radius);

	area = radius * radius * PI;
	circumference = 2.0 * radius * PI;

	printf("The radius is %lf.\n", radius);
	printf("The area is %lf.\n", area);
	printf("The circumference is %lf.\n", circumference);

	return 0;
}