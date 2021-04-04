# include <stdio.h>

int main(void) {
	int x = 3;
	if (x<0) {
		printf("x inferior to 0\n");
	}
	else if (x>0) {
		printf("x is superior to 0\n");
	}
	else {
		printf("x is equal to 0\n");
	}
}