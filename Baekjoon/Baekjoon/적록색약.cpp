#include<stdio.h>
#include<iostream>
#include<vector>
#define MAX 101
using namespace std;
int N;

char map[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int Bluecnt = 0;
int Redcnt = 0;
int Greencnt = 0;


void DFS1(pair<int, int> start) {

	pair<int, int>current;
	current.first = start.first;
	current.second = start.second;

	for (int i = 0; i < 4; i++) {
		int x = current.first + dx[i];
		int y = current.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= N) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� ���� ���Դϴ�. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'R' || map[x][y] == 'G') {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� %c�Դϴ�. \n\n", x, y, map[x][y]);
			continue;
		}
		if (visited[x][y]) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �̹� �湮�� �Ͽ����ϴ�. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'B' && !visited[x][y]) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �Ķ����̰� ���� �湮���� �ʾҽ��ϴ�. \n\n", x, y);
			visited[x][y] = true;
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS1(next);
		}


	}
}
void DFS2(pair<int, int>start) {
	pair<int, int>current;
	current.first = start.first;
	current.second = start.second;

	for (int i = 0; i < 4; i++) {
		int x = current.first + dx[i];
		int y = current.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= N) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� ���� ���Դϴ�. \n\n", x, y);
			continue;
		}
		if (map[x][y] !='R') {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� R�� �ƴմϴ�. \n\n", x, y);
			continue;
		}
		if (visited[x][y]) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �̹� �湮�� �Ͽ����ϴ�. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'R' && !visited[x][y]) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �������̰� ���� �湮���� �ʾҽ��ϴ� �湮���ݴϴ�!!. \n\n", x, y);
			visited[x][y] = true;
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS2(next);
		}
	}
}
void DFS3(pair<int, int>start) {
	pair<int, int>current;
	current.first = start.first;
	current.second = start.second;

	for (int i = 0; i < 4; i++) {
		int x = current.first + dx[i];
		int y = current.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= N) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� ���� ���Դϴ�. \n\n", x, y);
			continue;
		}
		if (map[x][y] != 'G') {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� R�� �ƴմϴ�. \n\n", x, y);
			continue;
		}
		if (visited[x][y]) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �̹� �湮�� �Ͽ����ϴ�. \n\n", x, y);
			continue;
		}
		if (map[x][y] == 'G' && !visited[x][y]) {
			//printf("��ǥ (%d,%d) : �ش� ��ǥ�� �������̰� ���� �湮���� �ʾҽ��ϴ� �湮���ݴϴ�!!. \n\n", x, y);
			visited[x][y] = true;
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS3(next);
		}
	}
}



int main() {
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	
	//���ϻ����� ������� B�� ���� ��. 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'B'&&!visited[i][j]) {
				pair<int, int>start;
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				//printf("<<<��ǥ :(%d,%d)���� DFS Ž���� �����մϴ�!!>>>\n\n\n", start.first, start.second);
				DFS1(start);
				//printf("�Ķ� ������ �ϳ� ã�ҽ��ϴ�!! \n\n");
				
				Bluecnt++;
				//printf("��������� �Ķ��� ���� : %d \n\n", Bluecnt);
			}


		}
	}

	//printf("<<<<�ϴ� �Ķ��� ������ ���� ã�ҽ��ϴ�. >>>\n\n\n");

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visited[i][j] = false;
		}
	}



	//���ϻ����� ����� ���� ������ Bluecnt���� +1�� �� ����� ����. 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'R'&&!visited[i][j]) {
				pair<int, int>start;
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				//printf("<<<��ǥ :(%d,%d)���� DFS Ž���� �����մϴ�!!>>>\n\n\n", start.first, start.second);
				DFS2(start);
				//printf("���� ������ �ϳ� ã�ҽ��ϴ�!! \n\n");

				Redcnt++;
				//printf("��������� ������ ���� : %d \n\n", Redcnt);
			}


		}
	}
	//���ϻ����� ����� ���� ������ Bluecnt���� +1�� �� ����� ����. 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'G' && !visited[i][j]) {
				pair<int, int>start;
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				//printf("<<<��ǥ :(%d,%d)���� DFS Ž���� �����մϴ�!!>>>\n\n\n", start.first, start.second);
				DFS3(start);
				//printf("���� ������ �ϳ� ã�ҽ��ϴ�!! \n\n");

				Greencnt++;
				//printf("��������� ������ ���� : %d \n\n", Redcnt);
			}


		}
	}


	printf("%d %d", Bluecnt+Redcnt+Greencnt,Redcnt+Greencnt);

}