//4-1 상하좌우
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int n = 0;
	int x = 1, y = 1;
	int nx = 0, ny = 0;
	char plans[100] = { '/0', };

	// L, R, U, D에 따른 이동 방향
	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };
	char moveType[4] = { 'L', 'R', 'U', 'D' };

	scanf("%d ", &n); // n 입력받기
	int** map = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; i++) {
		map[i] = (int**)malloc(sizeof(int*) * n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = 0;
		}
	}

	scanf("%[^\n]s", plans); // 이동 계획 입력받기

	// 이동 계획을 하나씩 확인
	for (int i = 0; i < strlen(plans); i += 2) {
		// 이동 후 좌표 구하기
		for (int j = 0; j < sizeof(moveType) / sizeof(char); j++) {
			if (plans[i] == moveType[j]) {
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}

		// 공간을 벗어나는 경우 무시
		if (nx < 1 || ny < 1 || nx > n || ny > n) {
			continue;
		}
		// 이동 수행
		x = nx;
		y = ny;
	}

	printf("%d, %d\n", x, y);

	// 메모리 해제
	for (int i = 0; i < n; i++) {
		free(map[i]);
	}
	free(map);
}
