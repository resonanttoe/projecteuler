#include <stdio.h>

int multiples()
{
	int multiple;
	long factee = 600851475143;

	for (multiple = 1; multiple < factee; multiple = multiple + 2) {
	    if (multiple * multiple < factee) {
		if (factee % multiple == 0) {
			factee = factee / multiple;
			}
	}
	return factee;
}
	

int main (void)
{
	printf("%d\n", multiples());
	return 0;
}

