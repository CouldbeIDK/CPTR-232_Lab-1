#include <stdlib.h>
#include <stdio.h>

int read_line(){
	FILE *source;
	source = fopen(source,"r");
	int line;
	fscanf(source, "%d", &line);
	return line;
};

int main() {
	int sorted[64];
	int i;
	for (i=0 ; i < 64 ; i++){
		sorted[i] = 0;
	}
	for (i=0 ; i < 64 ; i++){
		printf("%d, ", sorted[i]);
	}
	/*for (i=0 ; current != * ; i++) {
		*/
}