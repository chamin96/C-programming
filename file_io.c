#include <stdio.h>

int main(int argc, char const *argv[])
{
	char line[255];
	FILE * fpointer = fopen("textFile.txt","r");

	fgets(line, 255, fpointer);
	printf("%s", line);

	fclose(fpointer);
	return 0;
}