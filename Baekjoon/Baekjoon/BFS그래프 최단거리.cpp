//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<stdio.h>
//using namespace std;
//
//
//int Q[101];
//int front = 0, back = 0;
//int ch[101];
//int N, M;
//vector <int> Queue[101];
//int PathCost[101];
//int target = 2;
//
//int main() {
//
//	scanf("%d %d", &N, &M);
//
//	int SNode, TNode;
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &SNode, &TNode);
//		Queue[SNode].push_back(TNode);
//	}
//
//
//	/*for (int i = 0; i < N+1; i++) {
//		for (int j = 0; j < Queue[i].size(); j++) {
//			printf("%d ", Queue[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	//���� �������� ����
//	ch[1] = 1;
//	Q[++back] = 1;
//	int current;
//	
//	while (front < back) {
//		current = Q[++front]; //���� 1
//		for (int i = 0; i < Queue[current].size(); i++) {
//			//���� �� ������ �� �� �ִ� ���� �Ǵ�
//			if (ch[Queue[current][i]] == 0) { //�����湮���� �ʾҴٸ�
//				Q[++back] = Queue[current][i]; //�ڿ� �߰��� �Ѵ�. 
//				ch[Queue[current][i]]=1; //�׸��� �湮ó���� ���ش�.
//				//�̰� �´°��� �ñ��մϴ�.
//				PathCost[Queue[current][i]] = PathCost[current] + ch[Queue[current][i]];
//			
//			}
//			
//		}
//	}
//	
//
//	for (int i = 2; i < N + 1; i++) {
//		printf("%d : %d \n", i, PathCost[i]);
//	}
//
//
//}