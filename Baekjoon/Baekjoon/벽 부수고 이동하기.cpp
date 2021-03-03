//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<queue>
//#include<string>
//#define MAX 1001
//using namespace std;
//
//
//int N, M;
//char map[MAX][MAX];
//bool visited[MAX][MAX];
//int wallcnt = 0;
//int minimum = 100000;
//
//typedef struct node {
//	int x;
//	int y;
//	int cnt = 0;
//}Node;
//
//queue<Node>Q;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//void BFS(Node start) {
//	int flag=0;
//	Node current;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//		Q.pop();
//
//		if (current.x == N - 1 && current.y == M-1) {
//			//printf("�������� �����Ͽ����ϴ�!!\n\n");
//			flag = 1;
//			if (minimum > current.cnt) {
//				//printf("������ �ּҰ� %d ���� %d�� �����Ƿ� �ش� ������ �����Ͽ� �ݴϴ�. \n\n", minimum, current.cnt);
//				minimum = current.cnt;
//				break;
//			}
//		}
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (x < 0 || y < 0 || x >= N || y >= M) { 
//				//printf("��ǥ (%d,%d) : ���� ���Դϴ�. \n\n",x,y);
//				continue; }
//
//			if (map[x][y] == '1') {
//				//printf("��ǥ (%d,%d) : �ش� ��ǥ�� ���Դϴ�. \n\n",x,y);
//				continue;
//			}
//			if (visited[x][y]) {
//				//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �̹� �湮�Ͽ����ϴ�. \n\n",x,y);
//				continue;
//			}
//			if (map[x][y] == '0' && !visited[x][y]) {
//				//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �湮�� ���� ����, ���� �������Ƿ� Ž���� �����մϴ�. \n\n", x, y);
//				visited[x][y] = true;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.cnt = current.cnt;
//				next.cnt++;
//				Q.push(next);
//			}
//			
//
//
//
//		}
//
//
//
//
//	
//	}
//
//
//}
//
//
//
//
//
//int main() {
//
//
//	cin >> N >> M;
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//
//
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] == '1') {
//				map[i][j] = '0';
//				//printf("��ǥ (%d,%d)�� 1�̹Ƿ� 0���� �ϴ� �ٲ��ݴϴ�. \n\n", i, j);
//				Node start;
//				start.x = 0;
//				start.y = 0;
//				start.cnt = 1;
//				visited[start.x][start.y] = true;
//				//printf("<<<<<��ǥ (%d,%d)���� bfs Ž���� �����մϴ�. \n\n>>>>>",start.x, start.y);
//				Q.push(start);
//				BFS(start);
//
//
//				//printf("��ǥ (%d,%d) : �ش� ��ǥ�� ���� ����ġ�Ͽ� �ݴϴ�. \n\n",i,j);
//				map[i][j] = '1';
//				for (int i = 0; i < N; i++) {
//					for (int j = 0; j < M; j++) {
//						visited[i][j] = false;
//					}
//				}
//
//
//
//
//
//			}
//
//
//
//
//		}
//	}
//
//
//	if (minimum == 100000) {
//		printf("-1");
//	}
//	else{
//	printf("%d", minimum);
//	}
//
//
//
//
//
//}