#include <stdlib.h>
#include <stdio.h>

int main() {
	int sorted[64];
	int i;
	int j;
	int k;
	int key;
	FILE * source;
	source = fopen("Example.txt","r");
	for (k=0 ; k < 64 ; k++){
		fscanf(source, "%d", &sorted[k]);
	}
	for (j=1 ; j < 64 ; j++){
		key = sorted[j];
		i = j - 1;
		while (i >= 0 && sorted[i] > key) {
			sorted[i+1] = sorted[i];
			i = i - 1;
		}
		sorted[i+1] = key;
	}
	for (k=0 ; k < 64 ; k++){
		printf("%d\n", sorted[k]);
	}
}