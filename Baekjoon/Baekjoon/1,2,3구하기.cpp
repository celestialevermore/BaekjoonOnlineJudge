//#include<stdio.h>
//
//
//int main() {
//
//	int dp[12];
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;
//	for (int i = 4; i < 12; i++) {
//		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
//	}
//	/*for (int i = 1; i < 12; i++) {
//		printf("%d ", dp[i]);
//	}*/
//
//	int N;
//	scanf("%d ", &N);
//
//
//
//
//	//�迭�� �޾Ƽ� ó���ϸ� �� Ʋ������???
//	int input[12];
//	for (int i = 0; i < N; i++) {
//		int tmp;
//		scanf("%d", &tmp);
//		input[tmp] = 1;
//	}
//	for (int i = 1; i < 12; i++) {
//		if (input[i] == 1) {
//			printf("%d\n", dp[i]);
//		}
//	}
//
//
//	///�̷��� ���� �½��ϴ�.
//	/*for (int i = 0; i < N; i++) {
//		int tmp;
//		scanf("%d", &tmp);
//		printf("%d\n", dp[tmp]);
//	}*/
//	return 0;
//}