#include"stdio.h"
int N, K, A[65537];
int S(int L, int R) {
	int M = (L + R) / 2;
	return M == L? 1: (A[R] + A[L] - 2 * A[M]) / 2 == 0 && S(L, M) && S(M, R);
}
int main() {
	scanf("%d%d", &N, &K);
	K = 1 << K;
	while (N--) {
		for (int i = 1; i <= K; i++) {
			scanf("%d", &A[i]);
			A[i] += A[i-1];
		}
		printf("%s\n", S(0, K)? "yes": "no");
	}
}
