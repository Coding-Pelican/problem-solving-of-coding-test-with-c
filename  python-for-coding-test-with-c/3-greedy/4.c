//3-4 1이 될 때까지
#include<stdio.h>

int main(void) {
	int n = 0, k = 0, cnt = 0;

	scanf("%d %d", &n, &k);

	while (n != 1) {
		if (n % k == 0) {
			n /= k;
		}
		else {
			n -= 1;
		}
		cnt++;
	}

	printf("%d", cnt);
}
