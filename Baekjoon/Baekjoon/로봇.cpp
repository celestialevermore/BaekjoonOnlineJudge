//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 101
//using namespace std;
//
//pair<pair<int, int>, int>start;
//pair<pair<int, int>, int>destination;
//
//
//queue<pair<int, int>, int>Q;
//int map[MAX][MAX];
////�������� ������ �迭
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//char dir[4] = { '��','��','��','��' };
//int r, c;
//
//
////�� : 1 �� : 2 �� : 3 �� :4 
//int minimum = 10000;
//
//void BFS(pair<pair<int, int>, int>start) {
//
//	while (!Q.empty()) {
//		pair<pair<int, int>, int>current;
//		current.first.first = Q.front().first.first;
//		current.first.second = Q.front().first.second;
//		current.second = Q.front().second;
//
//		for (int i = 0; i < 4; i++) {
//			int direction = i;
//			printf("%d : %c���� ��", direction, dir[i]);
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//
//			if (map[x][y] == 1) {
//				printf("���� : %c // ��ǥ : (%d,%d) �ش� �κ��� ���� �ش��մϴ�. \n\n", dir[i], x, y);
//				continue;
//			}
//
//			//���� ���� �շ��ִ� ���!! 
//			if (map[x][y] == 0) {
//
//			}
//
//
//
//
//
//
//		}
//
//
//	}
//
//
//
//}
//
//int main() {
//
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int rstart, cstart, dirstart;
//	int rdestination, cdestination, dirdestination;
//	
//	start.first.first = rstart;
//	start.first.second = cstart;
//	start.second = dirstart;
//	destination.first.first = rdestination;
//	destination.first.second = cdestination;
//	destination.second = dirdestination;
//	Q.push(start);
//	BFS(start);
//
//
//}