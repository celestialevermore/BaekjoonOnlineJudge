//#include<stdio.h>
//#include<stdlib.h>
//int N;
//int* input;
//int total;
//int sum = 0;
//int index = 1;
//int flag = 0;
//
//int flag = false;
//void DFS(int Level, int Sum) {
//	//���� ������ ����
//	/*if (total - Sum == Sum) {
//		printf("YES");
//	}
//	else {
//		index++;
//		DFS(Level, sum + input[index]);
//	}*/
//
//	if (Level == N + 1) {
//		if (sum > total / 2)return;
//		if (sum == (total - sum)) {
//			flag = true;
//		}
//	}
//	else {
//		DFS(Level + 1, sum + input[Level]); //���� ���� ����
//		DFS(Level + 1, sum);//���� ���� ��
//	}
//
//
//}
//
//
//
//int main() {
//	scanf("%d", &N);
//	input = (int*)malloc(sizeof(int) * (N + 1));
//
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &input[i]);
//		total += input[i];
//	}
//
//	DFS(1, 0);
//	if (flag)printf("YES \n");
//	else {
//		printf("NO \n");
//	}
//
//}