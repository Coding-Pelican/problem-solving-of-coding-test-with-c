//3-1 거스름돈 
#include<stdio.h>

int main(void) {
	int n, cnt = 0;
	int coin_type[4] = { 500, 100, 50, 10 };

	scanf("%d", &n);

	for (int i = 0; i < 4; i++) {
		cnt += (int)(n / coin_type[i]);
		n %= coin_type[i];
	}

	printf("%d", cnt);
}
