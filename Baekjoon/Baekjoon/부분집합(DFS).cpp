//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//int N;
//int check[51];
//
//void DFS(int L) {
//	//�ϴ� �������� ���� �����մϴ�. 
//	int sum = 0;
//	if (L == N + 1) {
//		for (int i = 1; i <= N; i++) {
//			if (check[i] == 1) {
//				sum+=i;
//			}
//		}
//		printf("%d ", sum);
//		printf("\n");
//	}
//	else {
//		//���� �κ������� ������ �ִ� ���
//		check[L] = 1;
//		DFS(L + 1); //�̰� ������ ������ ������!!
//		
//		
//		//�κ������� ������ ���� ���� ��� 
//		check[L] = 0;
//		DFS(L + 1);
//
//	}
//
//
//}
//
//
//int main() {
//
//
//
//
//	scanf("%d", &N);
//	DFS(1);
//
//}
//
//
