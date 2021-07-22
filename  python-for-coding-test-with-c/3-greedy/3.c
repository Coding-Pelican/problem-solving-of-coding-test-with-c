//3-3 숫자 카드 게임
#include<stdio.h>

int main(void) {
	int n = 0, m = 0, min = 0;

	int data[100][100] = { 0, };
	int a[100] = { 0, };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &data[i][j]);

			if (a[i] == 0 || a[i] > data[i][j]) a[i] = data[i][j];
		}
		if (min == 0 || min < a[i]) min = a[i];
	}
	printf("%d", min);
}
