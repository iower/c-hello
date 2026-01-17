#include <stdio.h>

void main() {
	int x = 1;
	int y, z;
	z = y = x;
	printf("%d %d %d\n", x, y, z);

	x = y == z;
	printf("%d\n", x);

	x = y > z;
	printf("%d\n", x);

	x += 5;
	y -= x;
	z *= x + 5;
	x /= 3;
	x % 10;
	x &= 0x0F;
	x |= 0x3A;
	y ^= 0x55;
	z >>= 2;
	x <<= 5;
	
}
