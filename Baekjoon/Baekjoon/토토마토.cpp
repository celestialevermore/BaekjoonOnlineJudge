//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int N, M;
//queue < pair<pair<int, int>, int>> Q;
//
//int Tomatomap[1001][1001];
//bool visited[1001][1001];
//bool ripen[1001][1001];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//void BFS() {
//	pair<pair<int, int>, int>current;
//	while (!Q.empty()) {
//		
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//		Q.pop();
//		printf("<<< (%d,%d) : ���� ��ġ���� �丶���� ������ �����մϴ�. \n\n", current.first.first, current.first.second);
//		printf("��������� ���� Ƚ�� : %d \n\n", current.second);
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//			if (x < 0 || y < 0 || x >= N || y >= M) {
//				printf("(%d,%d) : �ش� ��ǥ�� �丶�� ������ ������ ����ϴ�. \n\n", x, y);
//				continue;
//			}
//			if (Tomatomap[x][y] == -1) {
//				printf("(%d,%d) : �ش� ��ǥ�� �丶�䰡 ������� �ʽ��ϴ�. \n\n", x, y);
//				continue;
//			}
//			if (Tomatomap[x][y] || ripen[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ���� �̹� ���� �丶�䰡 �����մϴ�. \n\n", x, y);
//				continue;
//			}
//			if (Tomatomap[x][y] == 0 && !ripen[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ���� ���� ���� ���� �丶�䰡 ����ֽ��ϴ�. ������ �����մϴ�. \n\n", x, y);
//				ripen[x][y] = true;
//				Tomatomap[x][y] = 1;
//				pair<pair<int, int>, int > next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = current.second;
//				next.second++;
//				printf("(%d,%d) : �ش� ��ǥ���� ������ ����մϴ�. \n\n", x, y);
//				printf("��������� ���� Ƚ���� %d�Դϴ�. \n\n", next.second);
//				Q.push(next);
//
//
//			}
//
//		}
//		//(3,0,3) (0,5,3),(2,3,5), (0,3,5)��� �ƿ� 
//	}
//	
//
//}
//
//int main() {
//	printf("11\n");
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> Tomatomap[i][j];
//		}
//	}
//
//	int tomatocnt = 0;
//	pair<pair<int, int>, int> tomato[1001];
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (Tomatomap[i][j] == 1) {
//				tomato[tomatocnt].first.first = i;
//				tomato[tomatocnt].first.second = j;
//				tomato[tomatocnt].second = 0;
//				printf("(%d,%d) : �ش� ��ǥ�� �丶�䰡 �ֽ��ϴ�. \n\n", i, j);
//				ripen[i][j] = true;
//				Q.push(tomato[tomatocnt]);
//				tomatocnt++;
//				printf("���� ���� �丶���� ���� : %d\n\n", tomatocnt);
//
//			}
//		}
//	} 
//
//	BFS();
//
//
//}