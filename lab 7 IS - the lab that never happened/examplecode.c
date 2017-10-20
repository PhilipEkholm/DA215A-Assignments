#include <stdio.h>

/* Some example program for testing out pull-request */

int fact(int n) {
	if (n < 2)
		return 1;
	else
		return (n * fact(n-1));
}

int main(void)
{
	int someNumber = 5;
	printf("Fact of 5: %d\n", fact(someNumber));

	return 0;
}
