#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n;

void hanoi(int n, int from, int to, int via) {
	if (n == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	hanoi(n - 1, from, via, to);
	printf("%d %d\n", from, to);
	hanoi(n - 1, via, to, from);
}

int main() {
	scanf("%d", &n);
	int k = 1;
	for (int i = 0; i < n; i++)
		k = k * 2;
	k = k - 1;
	printf("%d\n", k);
	hanoi(n, 1, 3, 2);
	return 0;
}