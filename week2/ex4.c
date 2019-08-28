#include <stdio.h>
void swap(int *ap, int *bp) {
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}
int main() {
	int a, b, *ap, *bp;
	scanf("%d %d", &a, &b);
	ap = &a;
	bp = &b;
	swap(ap, bp);
	printf("%d %d\n", a, b);
}