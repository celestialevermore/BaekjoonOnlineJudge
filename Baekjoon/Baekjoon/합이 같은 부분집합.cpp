//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//
//bool flag = false;
//int N;
//int SumSet[1025];
//int* set;
//int total = 0;
//void DFS(int Level,int sum) {
//	if (sum > total / 2) { return; }
//	if (flag == true)return;
//	/*if (Level == N + 1) {
//		if (sum == total - sum) {
//			flag = true;
//		}
//	}*/
//	else {
//		DFS(Level + 1, sum + set[Level]);
//		DFS(Level + 1, sum);
//	}
//	
//
//}
//
//
//int main() {
//
//
//	//�迭 ������ ������ ���մϴ�. 
//	scanf("%d", &N);
//
//
//	//������ ������ݴϴ�. �� ��, �ε����� 1���� ������ �� �ֵ���
//	//N+1ũ��� ������ݴϴ�.
//	int* set = (int*)malloc(sizeof(int) * (N + 1));
//	//�κ������� ������ŭ ���� ���� �����̹Ƿ� 2�� N���� -1 ũ���� 
//	//�迭�� ������ݴϴ�. 
//	
//	//���� �迭�� ���Ҹ� ���� �ֽ��ϴ�. ����� �ߺ��� �����ϴ�.
//	//ù° ���Ҵ� �������̴ϱ� 0���� �׳� �ʱ�ȭ�մϴ�.
//	//�迭���ٰ� �޽��ϴ�.
//	set[0] = 0;
//	
//	for (int i = 1; i < N + 1; i++) {
//		scanf("%d", &set[i]);
//		total += set[i];
//	}
//
//
//	DFS(1,0);
//	if (flag)printf("YES \n");
//	else { printf("NO \n"); }
//	return 0;
//}
//
