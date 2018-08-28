#include <stdio.h>

int main(int argc, char const *argv[])
{
	int age = 22;
	int * pAge = &age;
	double gpa = 3.2;
	double * pGpa = &gpa;
	char grade = 'A';
	char * pGrade = &grade;

	printf("%d\n%.2f\n%c", *pAge,*pGpa,*pGrade);
	return 0;
}