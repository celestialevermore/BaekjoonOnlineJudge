//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<queue>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int TomatoBox[1000][1000];
//int visited[1000][1000];
//int n, m;
//queue<pair < pair<int, int>, int> >Q;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//void BFS(pair< pair<int, int>, int> vertex) {
//	pair< pair<int, int>, int> temp;
//
//	while (!Q.empty()) {
//		/*printf("�� ���� x��ǥ : %d \n", Q.front().first.first);
//		printf("�� ���� y��ǥ : %d \n", Q.front().first.second);
//		printf("�� ���� �̵� ��� : %d \n\n", Q.front().second);*/
//		temp.first.first = Q.front().first.first;
//		temp.first.second = Q.front().first.second;
//		temp.second = Q.front().second;
//		//temp.second++;
//		Q.pop();
//		for (int i = 0; i < 4; i++) {
//			int x = temp.first.first + dx[i];
//			int y = temp.first.second + dy[i];
//			int v = temp.second;
//			/*printf("�ĺ� %d���� x��ǥ : %d \n",i+1, x);
//			printf("�ĺ� %d���� y��ǥ : %d \n",i+1, y);
//			printf("�ĺ� %d���� �̵���� : %d \n\n",i+1, v);*/
//			if (x < 0 || y < 0 || x >= n || y >= m) {
//
//				continue;
//			}
//			if (TomatoBox[x][y] == 1 || TomatoBox[x][y] == -1) { continue; }
//			//�丶�䰡 ���� �ʾҰ� ���� �湮�� ���� �ʾҴٸ�
//			if (visited[x][y] == 0 && TomatoBox[x][y] == 0) {
//				v++;
//				/*printf("(%d,%d)���� �̵��մϴ�. \n\n", x, y);*/
//				pair< pair<int, int>, int>next;
//				visited[x][y] = 1;
//				TomatoBox[x][y] = 1;
//				next.first.first = x;
//				next.first.second = y;
//				next.second = v;
//
//				Q.push(next);
//			}
//			else { return; }
//		}
//
//	}
//	int flag = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (TomatoBox[i][j] == 0) { flag = 1; break; }
//			else { continue; }
//		}
//	}
//	if (flag == 0) {
//		printf("%d ", temp.second);
//	}
//	else {
//		printf("-1");
//	}
//
//}
//
//int main() {
//	scanf("%d %d", &m, &n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//
//			//scanf("%d", &TomatoBox[i][j]);
//			cin >> TomatoBox[i][j];
//		}
//	}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < m; j++) {
//	//		printf("(%d,%d) : %d  ", i,j,TomatoBox[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//�������� ������ �ľ��մϴ�. 
//	int startcount = 0;
//	//pair <pair<int, int>, int> start;
//	vector< pair <pair<int, int>, int> > startpoint(1000);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (TomatoBox[i][j] == 1) {
//
//				startcount++;
//				//printf("���� �������� ���� : %d \n", startcount);
//				startpoint[startcount].first.first = i;
//				//printf("�ش� �������� x��ǥ : %d \n", startpoint[startcount].first.first);
//				startpoint[startcount].first.second = j;
//				//printf("�ش� �������� y��ǥ : %d \n", startpoint[startcount].first.second);
//				startpoint[startcount].second = 0;
//				//printf("�ش� ������������ ������ ��� : %d \n", startpoint[startcount].second);
//				visited[startpoint[startcount].first.first][startpoint[startcount].first.second] = 1;
//				startpoint[startcount];
//				Q.push(startpoint[startcount]);
//
//				/*startpoint[startcount].first.first = i;
//				startpoint[startcount].first.second = j;
//				startpoint[startcount].second = 0;
//				printf("%d %d\n", startpoint[startcount].first.first, startpoint[startcount].first.second);*/
//				//printf("<<<<Ž���� �����մϴ�.>>>> \n\n");
//				Q.push(startpoint[startcount]);
//				/*start.first.first = i;
//				start.first.second = j;
//				start.second = 0;
//				Q.push(start);*/
//			}
//		}
//
//	}
//	BFS(startpoint[1]);
//	//BFS(start);
//}