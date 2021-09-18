#include <stdio.h>

int main() {
	printf("Dylan's Work 02 Program\n\n");

	unsigned int zero = 0;
	printf("Unsigned Int 0: %d\n", zero);
	unsigned int a_lot = 12345678;
	printf("Large Unsigned Int: %d\n", a_lot);
	unsigned int neg = -10;
	printf("Negative(?) Unsigned Int: %d\n", neg);

	printf("\n");

	// testing unassigned int, returns whatever's in memory i think
	int unassigned;
	printf("Unassigned int: %d\n", unassigned);

	printf("\n");

	short max_short = 32767;
	printf("Largest short: %d\n", max_short);
	short overflow = 32768;
	printf("Overflow short: %d\n", overflow);
	short underflow = -32769;  // gives a warning
	printf("underflow short: %d\n", underflow);

	printf("\n");

	double myDouble = 3.1415926535;
	printf("A double: %lf\n", myDouble);

	return 0;
}

