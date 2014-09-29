#include <stdlib.h>
#include <stdio.h>

int main() {
	int sorted[64];
	int i;
	FILE * source;
	source = fopen("Example.txt","r");
	for (i=0 ; i < 64 ; i++){
		fscanf(source, "%d", &sorted[i]);
	}
	for (i=0 ; i < 64 ; i++){
		printf("%d\n", sorted[i]);
	}
}