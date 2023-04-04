#include <stdio.h>

int chef[1010];
int N;

typedef unsigned long long ullt;

ullt served_at(ullt t) {
	ullt cnt = 0;
	for (int i = 0; i < N; i++) {
		cnt += t / chef[i];
	}
	return cnt;
}

int main() {
	int A;
	scanf("%d%d",&N,&A);
	for (int i = 0; i < N; i++) {
		scanf("%d",&chef[i]);
	}
	for (int i = 0; i < A; i++) {
		ullt x;
		scanf("%llu",&x);
		ullt a = 0, b = -1;
		ullt res = 0;
		while (a <= b) {
			ullt m = a/2+b/2+(a&b&1);
			//printf("::: %llu %llu %llu\n",a,b,m);
			//getch();
			ullt t = served_at(m);
			ullt t2 = served_at(m-1);
			if ((t >= x && t2 < x)) {
				res = m;
				break;
			}
			if (t < x) {
				a = m+1;
			} else {
				b = m-1;
			}
		}
		printf("%llu\n",res);
	}
	return 0;
}


