//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//
//using namespace std;
//
//int TotalCost[21];
//int check[21];
//int N, M;
//int** map;
//int** CostMap;
//int index = 0;
//
//
//void DFS(int vertex, int Cost) {
//	if (vertex == N) {
//		TotalCost[index++] = Cost;
//	}
//	else {
//		//����Ǿ� �ִ� ���� ã�ƾ� �Ѵ�. �̰� �� ����..
//		for (int i = 1; i < N + 1; i++){
//			//���� ���� �����ϰ� �ش� �κп� ���� �湮�� ���� �ʾҴٸ�
//			if (map[vertex][i] != 0 && check[i] == 0) {
//				check[i] = 1; //�湮 ǥ�ø� ���ְ�
//				Cost = Cost + map[vertex][i]; //�ش簪�� �������ش�.
//				DFS(i, Cost); //map[1][2]�� �Ѵٸ� DFS(2,12)�� �������ش�.
//				//�׸��� ���� �ش� ������ ��� ���Ḧ �ߴٸ� 
//				//�ش� ������ ���� ����� �Ѵ�.
//				Cost = Cost - map[vertex][i];
//				check[i] = 0; // �� ���� 0ǥ��. 
//
//			}
//		}
//	}
//}
//
//
//
//
//int main() {
//
//	scanf("%d %d", &N, &M);
//
//	map = (int**)malloc(sizeof(int*) * N + 1);
//	for (int i = 0; i < N + 1; i++) {
//		map[i] = (int*)malloc(sizeof(int) * (N + 1));
//	}
//	/*CostMap = (int**)malloc(sizeof(int*) * N + 1);
//	for (int i = 0; i < N + 1; i++) {
//		CostMap[i] = (int*)malloc(sizeof(int) * (N + 1));
//	}*/
//	//�ʱ�ȭ�� �Ѵ�. 
//	for (int i = 0; i < N + 1; i++) {
//		for (int j = 0; j < N + 1; j++) {
//			map[i][j] = 0;
//			//CostMap[i][j] = 0;
//		}
//	}
//
//	int SNode, TNode, PathCost;
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &SNode, &TNode, &PathCost);
//		map[SNode][TNode] = PathCost;
//		//CostMap[SNode][TNode] = PathCost;
//	}
//	/*for (int i = 0; i < N + 1; i++) {
//		for (int j = 0; j < N + 1; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//	check[1] = 1;
//	DFS(1, 0);
//	int min = 10000;
//
//	for (int i = 0; i < index; i++) {
//		if (min > TotalCost[i]) {
//			min = TotalCost[i];
//		}
//	}
//	printf("%d", min);
//
//
//}