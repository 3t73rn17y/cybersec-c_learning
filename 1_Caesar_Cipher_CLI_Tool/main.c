#include <stdio.h>
int main (int c, char **v){

	printf("%d\n", c);
	for (int i = 0; i < c; i++){
		printf("%s\n", v[i]);
	}	
	

	//decleration and assignmnet of file read function etc:
	FILE *file = fopen(v[1], "r");
	//printf("file has been read successfully");
	
	//declare an int for the characters in the file
	//do the shit to make ceasars cipher possible!
	int ch;
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }


	fclose(file);
	return 0;
}
