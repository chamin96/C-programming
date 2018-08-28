#include <stdio.h>
#include <string.h>

struct Student
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(int argc, char const *argv[])
{
	
	struct Student stud1;
	struct Student stud2;

	stud1.age = 22;
	stud1.gpa = 3.20;
	strcpy(stud1.name,"Chamin");
	strcpy(stud1.major,"Comp");

	stud2.age = 20;
	stud2.gpa = 2.7;
	strcpy(stud2.name,"Lana");
	strcpy(stud2.major,"Sci");

	printf("%s\n", stud1.name);
	printf("%s\n", stud1.major);
	printf("%.2f\n", stud1.gpa);
	printf("%d\n", stud1.age);

	printf("--------------------\n");

	printf("%s\n", stud2.name);
	printf("%s\n", stud2.major);
	printf("%.2f\n", stud2.gpa);
	printf("%d\n", stud2.age);
	return 0;
}