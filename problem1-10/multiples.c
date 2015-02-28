#include <stdio.h>

int sumOfMultiples()
{
	int counter;
	int sum = 0;

	for ( counter = 0; counter < 1000; counter = counter + 1) {
	      if (counter % 3 == 0 || counter % 5 == 0 ) {
		 sum = sum + counter;
		}
	}
	return sum;
}

int main(void)
{	

	printf("%d\n", sumOfMultiples());
	return 0;
}
