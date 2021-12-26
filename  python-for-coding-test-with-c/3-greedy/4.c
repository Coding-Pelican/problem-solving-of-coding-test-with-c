//3-4 1이 될 때까지
#include <stdio.h>
int main(void) {
	int n, k, cnt = 0;
	scanf("%d %d", &n, &k);
	while (n > 1) {
		n = n % k != 0 ? n - 1 : n / k;
		cnt++;
	}
	printf("%d", cnt);
}

// // 일일이 1씩 빼는 방법
// int main(void) {
// 	int n = 0, k = 0, cnt = 0;

// 	scanf("%d %d", &n, &k);

// 	while (n != 1) {
// 		if (n % k == 0) {
// 			n /= k;
// 		}
// 		else {
// 			n -= 1;
// 		}
// 		cnt++;
// 	}

// 	printf("%d", cnt);
// }

//// 책 답안 예시
//int main(void) {
//	int n = 0, k = 0, cnt = 0, target = 0;
//
//	scanf("%d %d", &n, &k);
//
//	while (1) {
//		target = (n / k) * k;
//		cnt += (n - target);
//		n = target;
//
//		if (n < k) {
//			break;
//		}
//
//		n = n / k;
//		cnt++;
//	}
//
//	cnt += (n - 1);
//	printf("%d\n", cnt);
//}
