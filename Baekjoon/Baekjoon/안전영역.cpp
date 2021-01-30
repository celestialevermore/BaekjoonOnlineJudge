//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 101
//using namespace std;
//int N;
//int casecnt = 0;
//bool height[MAX];
//int heightinfo[MAX];
//bool visited[MAX][MAX];
//bool soaked[MAX][MAX];
//int map[MAX][MAX];
//int maximum = -1;
//bool specialcase = false;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//
//void DFS(pair<int, int> area) {
//
//
//	for (int i = 0; i < 4; i++) {
//		int x = area.first+dx[i];
//		int y = area.second+dy[i];
//		if (x < 0 || y < 0 || x >= N || y >= N) {/* cout << "(%d,%d) : �ش� ��ǥ�� ���� ������ ���� �ۿ� �ش��ϹǷ� Ž���� �� �����ϴ�.\n\n", x, y;*/
//			//cout << '(' << x << ',' << y << ") : �ش� ��ǥ�� ���� ������ ���� �ۿ� �ش��ϹǷ� Ž���� �� �����ϴ�." << endl << endl;
//			continue; }
//		if (visited[x][y]) { /*cout << "(%d,%d) : �ش� ��ǥ�� ������ �湮�� ���� �����Ƿ� Ž���� �����մϴ�. \n\n", x, y;*/
//			//cout << '(' << x << ',' << y << ") : �ش� ��ǥ�� ������ �湮�� ���� �����Ƿ� Ž���� �����մϴ�.." << endl << endl; 
//		continue; }
//		if (!soaked[x][y]&&!visited[x][y]) {
//			//cout << "(%d,%d) : �ش� ��ǥ�� ���� ��������� �ʾҰ�, ���� �湮���� �ʾ����Ƿ� Ž���� �����մϴ�. \n\n", x, y;
//			//cout << '(' << x << ',' << y << ") : �ش� ��ǥ�� ���� ��������� �ʾҰ�, ���� �湮���� �ʾ����Ƿ� Ž���� �����մϴ�." << endl << endl;
//			visited[x][y] = true;
//			pair<int, int>next;
//			next.first = x;
//			next.second = y;
//			//printf("(%d,%d) : �ش� ��ǥ���� DFS Ž���� �����մϴ�. \n\n", x, y);
//			//cout << '(' << x << ',' << y << ") : �ش� ��ǥ���� DFS Ž���� �����մϴ�." << endl << endl;
//			DFS(next);
//
//		}
//
//	}
//	return;
//
//}
//
//
//int main() {
//	cin >> N;
//
//
//	int input;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			if (!height[map[i][j]]) {
//				height[map[i][j]] = true;
//			}
//		}
//	}
//
//
//
//
//
//	for (int i = 0; i < MAX; i++) {
//		if (height[i]) {
//			heightinfo[casecnt] = i;
//			casecnt++;
//			
//		}
//	}
//	
//
//
//		for (int i = 0; i < casecnt; i++) {
//			int currentheight = heightinfo[i];
//			int notsoakedarea = 0;
//
//
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (map[i][j] <= currentheight) {
//						soaked[i][j] = true;
//					}
//				}
//			}
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (!soaked[i][j] && !visited[i][j]) {
//						pair<int, int>start;
//						start.first = i;
//						start.second = j;
//						visited[i][j] = true;
//						//printf("(%d,%d) : �ش� ������ ���� ����� �ʾҽ��ϴ�. ���⿡������ Ž���� �����մϴ�. \n\n", start.first, start.second);
//						//cout << '(' << start.first << ',' << start.second << ") : �ش� ������ ���� ����� �ʾҽ��ϴ�. ���⿡������ Ž���� �����մϴ�." << endl << endl;
//						DFS(start);
//
//						notsoakedarea++;
//						//printf("��� ������ %d�� �� ������� Ȯ�ε� ���� ����� ���� ������ ������ %d �Դϴ�. \n\n", currentheight, notsoakedarea);
//						//cout << "��� ������" << currentheight <<"�� �� ������� Ȯ�ε� ���� ����� ���� ������ ������ "<<notsoakedarea <<"�Դϴ�." << endl << endl;
//					}
//				}
//			}
//			if (maximum < notsoakedarea) {
//				maximum = notsoakedarea;
//
//
//
//				//printf("��� ������ %d�� �� ���� ����� ���� ������ �ִ� ���� %d �Դϴ�. \n\n", currentheight, maximum); 
//				//cout << "��� ������" << currentheight << "�� �� ���� ����� ���� ������ �ִ� ���� " << maximum << "�Դϴ�." << endl << endl;
//
//			}
//
//
//
//			//��� ������ �ʱ�ȭ �մϴ�. 
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					soaked[i][j] = false;
//					visited[i][j] = false;
//				}
//			}
//
//
//
//
//		}
//
//		//printf("%d ", maximum);
//		cout << maximum;
//
//
//
//
//
//
//	
//
//
//}
