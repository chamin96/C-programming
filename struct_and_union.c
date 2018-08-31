#include <stdio.h>

typedef struct myStruct
{
	int var;
	char var3;
	double var2;
}str;

typedef union myUnion
{
	int x;
	char z;
	double y;
}uni;

int main(){

	uni uni1;
	str str1;

	printf("Size of struct is %d bytes.\n", sizeof(str1));
	printf("Size of union is %d bytes.\n", sizeof(uni1));



	return 0;
}