//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//pair<pair<int, int>,int>start;
//pair<int, int>dest;
//int map[11][11];
//bool visited[11][11];
//int n, m;
//
//
//queue<pair<pair<int, int>,int>>q;
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//
//int BFS(pair<pair<int, int>,int>start) {
//
//	while (!q.empty()) {
//		pair<pair<int, int>,int>current;
//		current.first.first = q.front().first.first;
//		current.first.second = q.front().first.second;
//		current.second = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int x = current.first.first + dx[i];
//			int y = current.first.second + dy[i];
//			int cnt = current.second;
//			
//
//			if (x == n - 1 && y == m - 1) {
//				printf("(%d,%d) : �ش� ��ǥ�� �����Ͽ����ϴ�. Ž���� �����մϴ�. \n\n", x, y);
//				map[x][y] = 2;
//				cnt++;
//				return cnt;
//			}
//
//
//			if (x < 0 || y < 0 || x >= n || y >= m) {
//				printf("(%d,%d) : �ش� ��ǥ�� ���� ���Դϴ�. \n\n",x,y);
//				continue;
//			}
//			if (visited[x][y]) {
//				printf("(%d,%d) : �ش� ��ǥ�� �̹� �湮�� ���� �ֽ��ϴ�. \n\n", x, y);
//				continue;
//			}
//			if (!visited[x][y] && map[x][y] == 0) {
//				visited[x][y] = true;
//				printf("(%d,%d) : �ش� ��ǥ�� ���� �湮���� �ʾ����Ƿ� �湮�� �����մϴ�. \n\n", x, y);
//				map[x][y] = 2;
//				pair<pair<int, int>, int>next;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = cnt;
//				next.second++;
//				q.push(next);
//
//
//			}
//
//
//		}
//
//
//	}
//}
//
//
//
//int main() {
//	printf("������������ ���� �����ض�. \n\n");
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int rstart = 0, cstart = 1;
//	int rdes = n - 1, cdes = m - 1;
//	
//	start.first.first = rstart;
//	start.first.second = cstart;
//	start.second = 0;
//	dest.first = n - 1;
//	dest.second = m - 1;
//	q.push(start);
//	visited[start.first.first][start.first.second] = true;
//	int ans = 0;
//	ans = BFS(start);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d", ans);
//
//
//
//
//
//
//}