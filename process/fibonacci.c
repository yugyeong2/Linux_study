#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/times.h>
#include <limits.h>
#include <unistd.h>

int main() {
	int n, f1, f2, f3;

	struct timeval t1, t2;

	printf("Number: ");
	scanf("%d", &n);
	
	//start time
	gettimeofday(&t1, NULL);
	
	f1 = 0;
	f2 = 1;
	printf("Fibonacci sequence: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", f1);
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	
	//end time
	gettimeofday(&t2, NULL);

	printf("Process running time: %lf sec\n", (t2.tv_sec + t2.tv_usec*0.000001) - t1.tv_sec + t1.tv_usec*0.000001); //tv_sec: sec, tv_usec: microsec

	return 0;
}
