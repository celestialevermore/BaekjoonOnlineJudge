//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 1000000
//using namespace std;
//
//int N, M;
//
//bool visited[MAX];
//
//
//vector<int>vertex[MAX];
//
//queue<int>Q;
//int totalcnt = 0;
//void BFS(int start) {
//	int current;
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//
//		for (int i = 0; i < vertex[current].size(); i++) {
//			if (!visited[vertex[current][i]]) {
//				printf("%d : ���� Ž������ �ʾҽ��ϴ�. Ž���� �����մϴ�. \n\n", vertex[current][i]);
//				printf("%d : �湮ó���� ���ݴϴ�. \n\n", vertex[current][i]);
//				visited[vertex[current][i]] = true;
//				printf("%d���� bfsŽ���� �����մϴ�. \n\n", vertex[current][i]);
//				Q.push(vertex[current][i]);
//			}
//		}
//	}
//	
//	totalcnt++;
//	printf("��������� �������� ���� : %d \n\n",totalcnt);
//
//};
//
//int main() {
//
//	cin >> N >> M;
//
//
//	for (int i = 0; i < M; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		vertex[snode].push_back(tnode);
//		vertex[tnode].push_back(snode);
//	}
//
//	for (int i = 1; i <= N; i++) {
//		if (!visited[i]) {
//			Q.push(i);
//			visited[i] = true;
//			printf("<<<%d���� bfsŽ���� �����մϴ�. >>>\n\n", i);
//			BFS(i);
//		}
//		else {
//			continue;
//		}
//	}
//
//
//	printf("%d",totalcnt);
//
//
//}