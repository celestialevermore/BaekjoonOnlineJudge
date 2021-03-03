//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 301
//using namespace std;
//
//
//int T;
//int N;
//int movemove[100000];
//int movecnt = 0;
//int targetx=0, targety = 0;
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//
//int dx[8] = { -2,-1,1,2,2,1,-1,-2 };
//int dy[8] = { -1,-2,-2,-1,1,2,2,1 };
//
//
//
//typedef struct knight {
//	int x;
//	int y;
//	int cnt = 0;
//}K;
//
//
//queue<K>Q;
//
//void BFS(K start) {
//	K current;
//	int flag = 0;
//	while (!Q.empty()) {
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.cnt = Q.front().cnt;
//
//		//printf("��ǥ : (%d,%d) ���� ��ġ���� Ž���� �����ϰ� �ֽ��ϴ�. ���� Ž�� Ƚ�� : %d \n\n", current.x, current.y, current.cnt);
//
//		Q.pop();
//		if (current.x == targetx && current.y == targety) {
//			//printf("��ǥ : (%d,%d), Ÿ�� : (%d,%d) �츮�� ���ϴ� ��ġ�� �����Ͽ����ϴ�!! \n\n",current.x,current.y,targetx,targety);
//			flag = 1;
//			movemove[movecnt++] = current.cnt;
//			//printf("�� �׽�Ʈ ���̽��� ��� �ּ� �̵�Ƚ���� %d �Դϴ�. \n\n", current.cnt);
//			break;
//		}
//
//		for (int i = 0; i < 8; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//
//			if (x < 0 || y < 0 || x >= N || y >= N) {
//				continue;
//			}
//			if (visited[x][y]) { continue; }
//			if (!visited[x][y]) {
//				visited[x][y] = true;
//				K next;
//				next.x = x;
//				next.y = y;
//				next.cnt = current.cnt;
//				next.cnt++;
//				Q.push(next);
//			}
//
//
//
//		}
//	}
//
//	if (flag == 0) {
//		movemove[movecnt] = 0;
//		movecnt++;
//	}
//
//
//}
//
//
//
//int main() {
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//
//		cin >> N;
//		K start;
//		cin >> start.x >> start.y;
//		cin >> targetx >> targety;
//		
//		Q.push(start);
//		//printf("<<<<<��ǥ : (%d,%d)���� BFS Ž���� �����մϴ�!!>>>>>\n\n", start.x, start.y);
//		visited[start.x][start.y] = true;
//		BFS(start);
//
//		//printf("�ʱ�ȭ�� �����մϴ�. \n\n");
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				visited[i][j] = false;
//			}
//		}
//		while (!Q.empty()) {
//			Q.pop();
//		}
//
//
//		targetx = 0, targety = 0;
//
//	}
//	for (int i = 0; i < movecnt; i++) {
//		printf("%d\n", movemove[i]);
//	}
//
//
//}