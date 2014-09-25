#include <stdlib.h>
#include <stdio.h>

int read_line(char filename[]){
	FILE *origional;
	origional = fopen(filename,"r");
	int first_line;
	fscanf(origional, "%d", &first_line);
	return first_line;
};

int main() {
	int orgarray[64];
	int i;
	for (i=0; i<=63; i++){
		orgarray[i] = 0;
		printf("%d\n", orgarray[i]);
		}
	
}