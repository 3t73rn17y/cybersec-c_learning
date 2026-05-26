#include <stdio.h>
int main (int c, char **v){

	printf("%d\n", c);
	for (int i = 0; i < c; i++){
		printf("%s\n", v[i]);
	}	
	

	//decleration and assignmnet of file read function etc:
	FILE *file = fopen(v[1], "r");
	printf("file has been read successfully");

	fclose(file);
	return 0;
}
