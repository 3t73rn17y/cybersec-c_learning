#include <stdio.h>
int main (int c, char **v){

	printf("%d\n", c);
	for (int i = 0; i < c; i++){
		printf("%s\n", v[i]);
	}	
	


	return 0;
}
