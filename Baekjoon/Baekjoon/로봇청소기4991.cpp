//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 21
//using namespace std;
//
//char map[MAX][MAX];
//
//bool visited[MAX][MAX];
//
//int w=-1, h=-1;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//queue<robot>Q;
//
//
//typedef struct Robot {
//	int x;
//	int y;
//	int havetoclean = 0;
//	int movecnt = 0;
//}robot;
//
//
//int cnt = 0;
//int ans[10000];
//
//
//void BFS(robot start) {
//	robot current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.havetoclean = Q.front().havetoclean;
//		current.movecnt = Q.front().movecnt;
//
//		Q.pop();
//
//
//		printf("(%d,%d) 현재 좌표에서 탐색을 시작합니다. \n\n", current.x, current.y);
//		
//
//
//		if (current.havetoclean == 0) {
//			printf("청소가 완료되었습니다!!\n\n");
//			printf("청소 완료 시점에서의 이동 최소 횟수 : %d\n\n", current.movecnt);
//			ans[cnt] = current.movecnt;
//			cnt++;
//			break;
//		}
//
//
//
//
//		for (int i = 0; i < 4; i++) {
//			
//			int x = current.x+dx[i];
//			int y = current.y + dy[i];
//
//			if (x < 0 || y < 0 || x >= h || y >= w) {
//				printf("(%d,%d) : 해당 좌표는 지도의 범위를 벗어납니다. \n",x,y);
//				printf("현재 이동 횟수는 %d 입니다. \n\n", current.movecnt);
//				continue;
//			}
//			if (visited[x][y]) {
//				printf("(%d,%d) : 해당 좌표는 이미 방문을 하였습니다. \n", x, y);
//				printf("현재 이동 횟수는 %d 입니다. \n\n", current.movecnt);
//				continue;
//			}
//			if (map[x][y] == 'x') {
//				printf("(%d,%d) : 해당 좌표는 가구입니다. \n", x, y);
//				printf("현재 이동 횟수는 %d 입니다. \n\n", current.movecnt);
//			}
//			if (!visited[x][y]&&map[x][y] == '.') {
//				printf("(%d,%d) : 해당 좌표는 깨끗합니다. \n", x, y);
//				printf("현재 이동 횟수는 %d 입니다. \n\n", current.movecnt);
//				visited[x][y] = true;
//				robot next;
//				next.x = x;
//				next.y = y;
//				next.movecnt = current.movecnt;
//				next.havetoclean = current.havetoclean;
//				next.movecnt++;
//				Q.push(next);
//				
//			}
//			if (!visited[x][y]&&map[x][y] == '*') {
//				printf("(%d,%d) : 해당 좌표는 더럽습니다. 청소를 진행해야 합니다. \n", x, y);
//				visited[x][y] = true;
//				map[x][y] = '.';
//				robot next;
//				next.x = x;
//				next.y = y;
//				next.movecnt = current.movecnt;
//				next.havetoclean = current.havetoclean;
//				next.movecnt++;
//				next.havetoclean--;
//				printf("현재 이동 횟수는 %d 입니다. \n\n", next.movecnt);
//				Q.push(next);
//				
//			}
//
//			
//
//		
//		
//		}
//	}
//	int flag = 0;
//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < w; j++) {
//			if (map[i][j] == '*') {
//				printf("(%d,%d) : 아직 청소하지 않은 지점이 있습니다. \n\n", i, j);
//				flag = 1;
//				break;
//			}
//		}
//	}
//
//	if (flag == 1) {
//		ans[cnt] = -1;
//		cnt++;
//
//	}
//
//
//
//
//
//}
//
//
//int main() {
//
//	while (w != 0 && h != 0) {
//
//		cin >> w >> h;
//
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> map[i][j];
//			}
//		}
//		//시작점을 정합니다. 
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				robot start;
//				if (map[i][j] == '*') {
//					start.havetoclean++;
//				}
//				
//				if (map[i][j] == 'o') {
//					start.x = i;
//					start.y = j;
//					start.movecnt = 0;
//					visited[start.x][start.y] = true;
//					printf("<<<(%d,%d): 이 지점에 로봇청소기가 존재합니다. 청소를 시작합니다.>>>\n\n\n",start.x,start.y);
//					Q.push(start);
//					BFS(start);
//				}
//			}
//		}
//
//		//초기화
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				visited[i][j] = false;
//				map[i][j] = ' ';
//			}
//		}
//
//
//
//
//
//
//	}
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", ans[i]);
//	}
//
//
//
//
//
//
//}
//
//
//
