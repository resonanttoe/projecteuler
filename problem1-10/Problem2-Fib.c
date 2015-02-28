#include <stdio.h>

int fibsequence()
{
	int first = 1;
	int second = 1;
	int sum;

	for ( int limit = 4000000; second < limit; first = first + second){
	      if ( second % 2 == 0) {
		 sum = sum + second;
		 }
	      if ( first % 2 == 0 ) {
		 sum = sum + first;
		 }
	      second = first + second;
	}
	return sum;
}

int main(void)
{
	printf("%d\n", fibsequence());

return 0;
}

