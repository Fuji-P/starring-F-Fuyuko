#include <stdio.h>
int main(void) {
	/*
	for (int i = 0; i < 8; i++) {
		for (int x = 0; x < 20; x++) {
			int d = x - 10;
			if (d < 0) {
				d *= -1;
			}
			char c = ' ';
			if (d <= i) {
				c = '*';
			}
			printf("%c", c);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		for (int x = 0; x < 18; x++) {
			char c = ' ';
			if ((x == 10) || (x == 11)) {
				c = '*';
			}
			printf("%c", c);
		}
		printf("\n");
	}
	*/
	for (int ic = 0; ic < 10; ic++) {
		for (int jc = 0; jc <= 10 - ic; jc++) {
			printf(" ");
		}
		for (int jc = 0; jc < ic; jc++) {
			printf("£");
		}
		printf("\n");
	}

	for (int ic = 0; ic < 2; ic++) {
		for (int jc = 0; jc < 11; jc++) {
			if (jc < 9) printf(" ");
			else printf("¡");
		}
		printf("\n");
	}
	printf("Merry Christmas");
	return 0;
}