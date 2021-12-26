//3-2 큰 수의  법칙
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;    // 오름차순
}

int main(void) {
	int n, m, k;
	int* a;
	int first, second;
	scanf("%d %d %d", &n, &m, &k);
	a = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf(" %d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	first = a[n - 1];
	second = a[n - 2];
  /*
	* 도출과정
	* Ex) A{2, 4, 5, 4, 6}, m = 8, k = 3
	* => 6 + 6 + 6 +5 + 6 + 6 + 6 + 5 = 46
	* 이때 수열 {6 + 6 + 6 + 5}와 큰 수 6이 반복
	* 수열의 길이 = (k+1), m/(k+1) = 수열이 반복하는 횟수, m/(k+1)*k = 가장 큰 수의 반복 횟수
	* m/(k+1)의 나머지는 큰 수가 추가로 더해지는 횟수
	* ∴ 가장 큰 수가 더해지는 횟수 = m/(k+1)*k + m%(k+1)
	*/
	printf("%d\n", m / (k + 1) * (k * first + second) + m % (k + 1));
	free(a);
}
