//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//int n, m;
//int r, c, dir;
//int map[52][52];
//bool cleaned[52][52];
//int cleaningcnt = 0;
////d�� 0 : �� 
////d�� 1 : ��
////d�� 2 : ��
////d�� 3 : ��
//
//
//void DFS(pair<int, int> start) {
//	//������ ���
//	if (dir == 0) {
//		int dx[4] = { 0,-1,1,0 };
//		int dy[4] = { -1,0,0,1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : �ش� ��ǥ�� ���̹Ƿ� ��θ� �����մϴ�.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� �̹� û�Ұ� �Ǿ����Ƿ� ��θ� �����մϴ�. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� ���� û�Ұ� ���� �ʾ����Ƿ� û�Ҹ� �����մϴ�.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//	//������ ���
//	if (dir == 1) {
//		int dx[4] = {-1,0,1,0 };
//		int dy[4] = {0,-1,0,1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : �ش� ��ǥ�� ���̹Ƿ� ��θ� �����մϴ�.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� �̹� û�Ұ� �Ǿ����Ƿ� ��θ� �����մϴ�. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� ���� û�Ұ� ���� �ʾ����Ƿ� û�Ҹ� �����մϴ�.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//	//������ ���
//	if (dir == 2) {
//		int dx[4] = { 1,0,-1,0 };
//		int dy[4] = { 0,1,0,-1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : �ش� ��ǥ�� ���̹Ƿ� ��θ� �����մϴ�.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� �̹� û�Ұ� �Ǿ����Ƿ� ��θ� �����մϴ�. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� ���� û�Ұ� ���� �ʾ����Ƿ� û�Ҹ� �����մϴ�.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//	//������ ���
//	if (dir == 1) {
//		int dx[4] = { 1,0,-1,0 };
//		int dy[4] = { 0,1,0,-1 };
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x <= 0 || y <= 0 || x > n - 1 || y > m - 1) { continue; }
//			if (map[x][y] == 1) { printf("(%d,%d) : �ش� ��ǥ�� ���̹Ƿ� ��θ� �����մϴ�.\n\n", x, y); continue; }
//			if (cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� �̹� û�Ұ� �Ǿ����Ƿ� ��θ� �����մϴ�. \n\n", x, y);
//				continue;
//			}
//
//			if (map[x][y] == 0 && !cleaned[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� ���� û�Ұ� ���� �ʾ����Ƿ� û�Ҹ� �����մϴ�.\n\n", x, y);
//				cleaned[x][y] = true;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				cleaningcnt++;
//				DFS(next);
//
//
//			}
//
//		}
//		return;
//	}
//
//
//	
//}
//
//int main() {
//
//	cin >> n >> m;
//	cin >> r >> c >> dir;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//
//
//	
//	pair<int, int>start;
//	start.first = r;
//	start.second = c;
//	printf("(%d,%d) : û�ұ��� ��ġ���� û�Ҹ� �����մϴ�. \n\n", start.first, start.second);
//	cleaned[start.first][start.second] = true;
//	DFS(start);
//	
//
//
//	printf("%d ", cleaningcnt);
//
//	
//	
//
//}
