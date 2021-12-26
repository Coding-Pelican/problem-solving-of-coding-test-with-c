//3-3 숫자 카드 게임
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int map[100][100] = { 0, };
	int n, m;
	int* min_arr;
	int min = 10001;
	int max = 0;
	scanf("%d %d", &n, &m);
	min_arr = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %d", &map[i][j]);
			min = min > map[i][j] ? map[i][j] : min;
		}
		min_arr[i] = min;
		min = 10001;
	}
	for (int i = 0; i < n; i++) {
		max = max < min_arr[i] ? min_arr[i] : max;
	}
	printf("%d", max);
}