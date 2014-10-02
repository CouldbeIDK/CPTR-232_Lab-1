#include <stdlib.h>
#include <stdio.h>

int main() {
	int sorted[64];
	int i, j, k, key, slength;
	i=0;
	while ((scanf("%d", &j) >= 0) && (i<64)){
		sorted[i++] = j;
	}
	slength = i;
	for (j=1 ; j < slength ; j++){
		key = sorted[j];
		i = j - 1;
		while (i >= 0 && sorted[i] > key) {
			sorted[i+1] = sorted[i];
			i = i - 1;
		}
		sorted[i+1] = key;
	}
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
}