#include <stdio.h>
#include <math.h>

int main() {
	int i;
	float f;
	double d;
	int INT_MAX = pow(2, sizeof(i)*8 - 1) - 1;
	float FLOAT_MAX = pow(2, sizeof(f)*8 - 1) - 1;
	double DOUBLE_MAX = pow(2, sizeof(d)*8 - 1) - 1;
	printf("Size of int: %lu\nSize of float: %lu\nSize of double: %lu\n", sizeof(i), sizeof(f), sizeof(d));
	printf("INT_MAX: %d\nFLOAT_MAX: %f\nDOUBLE_MAX: %f\n", INT_MAX, FLOAT_MAX, DOUBLE_MAX);
}