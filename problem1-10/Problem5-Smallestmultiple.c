#include <stdio.h>

int main(void)
{
	int testnum = 2520;

	while(1)
	{
	   if( testnum % 17 == 0 && testnum % 19 == 0 &&
	       testnum % 13 == 0 && testnum % 11 == 0 &&
	       testnum % 12 == 0 && testnum % 14 == 0 &&
	       testnum % 15 == 0 && testnum % 16 == 0 &&
	       testnum % 18 == 0 && testnum % 20 == 0 )
	   {
		printf("%d\n", testnum);
		return 0;
	   }

	testnum = testnum + 2520;
	}

return 0;
}
