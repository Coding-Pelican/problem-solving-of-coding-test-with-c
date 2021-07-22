//3-2 큰 수의  법칙
#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void) {
	int n = 0, m = 0, k = 0, sum = 0, first_num = 0, second_num = 0;
	int a[10000] = { 0, }, cnt_data[10000] = { 0, };

	scanf("%d %d %d", &n, &m, &k);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	qsort(a, n, sizeof(int), compare);
	first_num = a[n - 1];
	second_num = a[n - 2];

	while (1) {
		for (int i = 0; i < k; i++) {
			if (m == 0) break;
			sum += first_num;
			m--;
		}
		if (m == 0) break;
		sum += second_num;
		m--;
	}

	printf("%d", sum);
}
