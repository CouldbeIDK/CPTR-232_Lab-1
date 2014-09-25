#include <stdlib.h>
#include <stdio.h>

int read_doc(char filename[]){
	FILE *origional;
	origional = fopen(filename,"r");
	int first_line;
	fscanf(origional, "%d", &first_line);
	return first_line;
};

int main() {
	int firstline = read_doc("Example.txt");
	printf("%d\n", firstline);
}