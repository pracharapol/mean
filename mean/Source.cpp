#include<stdio.h>
int main() {
	printf("please enter number : ");
	int a,b,x = 0;
	float d{};
	scanf_s("%d %d", &a, &b);
	if (b<a) {
		for (; b <= a; a--) {
			printf("%d ", a);
			x += 1;
			d += a;
		}
		printf("\nMean = %.2f", d / x);
	}
	else if (a<b) {
		for (; a <= b; a++) {
			printf("%d ", a);
			x += 1;
			d += a;
		}
		printf("\nMean = %.2f", d / x);
	}
	return 0;
}