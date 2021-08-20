#include<stdio.h>

int main() {

	int a, b;
	scanf_s("%d", &a);

	b = a * a;

	for (int i = 1; i <= b; i++) {

		if (i % b <= a) {

			printf("* ");

		}

		else if (i % b > a) {
			printf("\n");
			i = 0;
			b -= a;
		}

	}
}