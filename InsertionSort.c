#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// The Loop invariant is that you always know that 
// everything before the last sorted int is in order

int main() {
	time_t startseconds, endseconds;
	
	int sorted[10000];
	int i, j, k, key, slength;
	i=0;
	while ((scanf("%d", &j) >= 0) && (i<10000)){
		sorted[i++] = j;
	}
	slength = i;
	startseconds = time(NULL);
	for (j=1 ; j < slength ; j++){
		key = sorted[j];
		i = j - 1;
		while (i >= 0 && sorted[i] > key) {
			sorted[i+1] = sorted[i];
			i = i - 1;
		}
		sorted[i+1] = key;
	}
	endseconds = time(NULL);
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
	printf("It took this algorithm %d seconds to finish", startseconds - endseconds);
}