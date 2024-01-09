#include <stdio.h>

int main()
{
	FILE *_file_pointer;
	char _f_name[50];

	printf("Enter File Name: ");
	scanf("%s", _f_name);

	_file_pointer = fopen(_f_name, "w");

	fclose(_file_pointer);

	printf("File '%s' has been created.\n", _f_name);

	return 0;
}
