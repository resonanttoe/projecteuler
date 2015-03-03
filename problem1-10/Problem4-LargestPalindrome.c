\* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. *\

#include <stdio.h>

int product() {
	int first, second, max = 0;
	for (first = 100; first <= 999; first++) {
	  for (second = 100; second <= 999; second++) {
	    int product = first*second;
	return product
		}
	}
}

int palindromic(ref) {
	int checknum = 0, testnum, ref

	while (testnum) {
	  checknum = 10*checknum + (testnum % 10);
	  testnum /= 10;
	}
    return checknum == ref;
}

int main(void) {

if (palindromic(product) && product > max) {
	max = product;
	}

printf("%d\n", max);
return 0;
}
