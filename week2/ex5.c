#include <stdio.h>

void one(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void two(int n) {
	for (int i = 0; i < (n+1)/2; i++){
		for(int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n/2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}	

}

void three(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}

}

int main() {
	int n, k;
	printf("Enter your number:\n");
	scanf("%d", &n);
	printf("Choose 1, 2 or 3\n");
	scanf("%d", &k);
	switch(k) {
		case 1:
			one(n);
			break;
		case 2:
			two(n);
			break;
		case 3:
			three(n);
			break;		
	}
}