//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//int testcase;
//int m, n,k;
//int map[51][51];
//bool visited[51][51];
//bool caseofone = false;
//int bugcnt = 0;
//vector<int> bug[2000];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void BFS(pair<int, int> start) {
//
//
//
//	for (int i = 0; i < 4; i++) {
//		int y = start.first + dx[i];
//		int x = start.second + dy[i];
//		if (x < 0 || y < 0 || x >= m || y >= n) { continue; }
//		if (map[y][x] == 0 || visited[y][x]) { continue; }
//		if (map[y][x] == 1 && !visited[y][x]) {
//			visited[y][x] = true;
//			//printf("(%d,%d) : �ش� ���� �湮�մϴ�. \n\n", y, x);
//			pair<int, int>next;
//			next.first = y;
//			next.second = x; 
//			//printf("(%d,%d) : �ش������� bfs�� �����մϴ�. \n\n", y, x);
//			BFS(next);
//
//		}
//	}
//	return;
//
//}
//
//int main() {
//
//
//
//	cin >> testcase;
//	int index = 0;
//
//	while (index < testcase) {
//		cin >> m >> n >> k;
//		int r, c;
//		for (int i = 0; i < k; i++) {
//			cin >> r >> c;
//			map[c][r] = 1;
//		}
//		/*	for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				printf("%d ", map[i][j]);
//			}
//			printf("\n");
//		}*/
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (map[i][j] != 0) {
//					caseofone = true; break;
//				}
//			}
//		}
//
//		//��� 0�� ���
//		if (!caseofone) { 
//			bug[bugcnt].push_back(0);
//			bugcnt++; 
//		}
//		//���� �߰��� 1�� �߰ߵ� ���, �� ���߰� �ִ� ���
//		if(caseofone){
//			int bachucnt = 0;
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					//�̹����� bfs�� Ǯ��Կ�
//					if (map[i][j] == 1&&!visited[i][j]) {
//						visited[i][j] = true;
//						pair<int, int>start;
//						start.first = i;
//						start.second = j;
//						//printf("(%d,%d) : �ش� ������ Ž���� �����մϴ�.\n\n",start.first, start.second);
//						
//						BFS(start);
//						bachucnt++;
//						//printf("Ž���� �����մϴ�. ������� ���߹��� %d ���� �߰��߽��ϴ�. \n\n", bachucnt);
//					}
//
//
//				}
//			}
//			bug[bugcnt].push_back(bachucnt);
//			bugcnt++;
//
//		}
//		//�ʱ�ȭ�ϴ� �����Դϴ�. 
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				map[i][j] = 0;
//				visited[i][j] = false;
//			}
//		}
//		caseofone = false;
//		index++;
//
//	}
//
//	for (int i = 0; i < bugcnt; i++) {
//		for (int j = 0; j < bug[i].size(); j++) {
//			printf("%d\n", bug[i][j]);
//		}
//	}
//	
//
//
//
//}