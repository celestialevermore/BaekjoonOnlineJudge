#include<stdio.h>
#include<iostream>
#include<vector>
#define MAX 300
using namespace std;

int N, M;

int glacier[MAX][MAX];
bool visited[MAX][MAX];
int melting[MAX][MAX];


int yearcnt = 0;
int glaciercntlist[MAX];
int glaciercnt = 0;
int glacierheight[11];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };


void Meltinginfo() {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (glacier[i][j] != 0) {
				int meltinginfo = 0;
				int x = i, y = j;
				for (int i = 0; i < 4; i++) {
					int xx = x + dx[i];
					int yy = y + dy[i];
					if (xx < 0 || y < 0 || xx >= N || yy >= M) { continue; }
					if (glacier[xx][yy] == 0) {
						meltinginfo++;
					}
				}
				melting[x][y] = meltinginfo;
			}
		}
	}

	printf("\n\n<<������ ���� �������� ��¹����� ���� �����Դϴ�. >>\n\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", melting[i][j]);
		}
		printf("\n");
	}


}


void Gomelting() {
	Meltinginfo();

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			glacier[i][j] = glacier[i][j] - melting[i][j];
			if (glacier[i][j] < 0) { glacier[i][j] = 0; }
		}
		
	}
}
bool iszero() {
	int flag = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (glacier[i][j] == 0) {
				continue;
			}
			else {
				flag = 1; break;
			}
		}
	}
	if (flag == 0) { return true; }
	else { return false; }
}



void DFS(pair<int,int>start) {
	
	for (int i = 0; i < 4; i++) {
		int x = start.first + dx[i];
		int y = start.second + dy[i];

		if (x < 0 || y < 0 || x >= N || y >= M) {
			printf("��ǥ(%d,%d) : ������ �Ѿ�ϴ�. \n\n",x,y);
			continue;
		}
		if (visited[x][y]) { continue; }
		if (glacier[x][y] != 0 && !visited[x][y]) {
			visited[x][y] = true;
			printf("��ǥ(%d,%d) %d : ���� ���� ���� ���꿡 �ش��ϹǷ� Ž���� �����մϴ�. \n\n", x, y,glacier[x][y]);
			pair<int, int>next;
			next.first = x;
			next.second = y;
			DFS(next);
			
		}



	}
	return;

}
int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> glacier[i][j];
		}
	}

	//�ȳ�� ���� �����ִ� ����.
	while (!iszero()) {
		//�ϴ� ���δ�.
		Gomelting();
		yearcnt++;
		printf("<<%d�� ���� ���ظ� ������ ������ ������ ������ �����ϴ�.>> \n\n", yearcnt);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				printf("%d ", glacier[i][j]);
			}
			printf("\n");
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (glacier[i][j] != 0 && !visited[i][j]) {
					visited[i][j] = true;
					printf("\n��ǥ (%d,%d) : �� ��ǥ�� ���� ���� ���� �ʾ����Ƿ� ���⿡�� DFSŽ���� �����մϴ�. \n\n", i, j);
					pair<int, int>start;
					start.first = i;
					start.second = j;
					DFS(start);
					glaciercntlist[glaciercnt]++;
						
					printf("\n\n%d���� ������ �� Ȯ�εǴ� ������ ������ %d �Դϴ�.\n\n", yearcnt, glaciercntlist[glaciercnt]);
					

				}
			}
		}
		
		glaciercnt++;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				visited[i][j] = false;
			}
		}

	}

	for (int i = 0; i < glaciercnt; i++) {
		printf("%d ", glaciercntlist[i]);
	}
	printf("\n");









	int ans = 0;
	int flag_ = 0;
	for (int i = 0; i < glaciercnt; i++) {
		//�ƹ��� �쿩�� ������ �ϳ��ۿ� ���� ���
		if (glaciercntlist[i] == 1) {
			printf("%d���� ���� ���������� ���� ���ϰ� 1���Դϴ�. \n\n", i+1);
			continue;
		}
		if (glaciercntlist[i] > 1) {
			flag_ = 1;
			ans = i + 1;
			break;
		}
		else { continue; }
	}
	

	if (flag_ == 0) {
		printf("0");
	}
	else {
		printf("%d", ans);
	}


	





}