//3-2 큰 수의  법칙
#include<stdio.h>
#include<stdlib.h>

int static compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void) {
	int n = 0, m = 0, k = 0, first_num = 0, second_num = 0, cnt = 0, sum = 0;
	int a[10000] = { 0, };

	scanf("%d %d %d", &n, &m, &k);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	qsort(a, n, sizeof(int), compare);
	first_num = a[n - 1];
	second_num = a[n - 2];

	/*
	* 도출과정
	* Ex) A{2, 4, 5, 4, 6}, m = 8, k = 3
	* => 6 + 6 + 6 +5 + 6 + 6 + 6 + 5 = 46
	* 이때 수열 {6 + 6 + 6 + 5}와 큰 수 6이 반복
	* 수열의 길이 = (k+1), m/(k+1) = 수열이 반복하는 횟수, m/(k+1)*k = 가장 큰 수의 반복 횟수
	* m/(k+1)의 나머지는 큰 수가 추가로 더해지는 횟수
	* ∴ 가장 큰 수가 더해지는 횟수 = m/(k+1)*k + m%(k+1)
	*/
	cnt = (int)(m / (k + 1)) * k + m % (k + 1);

	sum += first_num * cnt;
	sum += (m - cnt) * second_num;

	printf("%d", sum);
}
