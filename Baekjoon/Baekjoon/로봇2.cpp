#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
#define MAX 101
using namespace std;


typedef struct start {
	int x;
	int y;
	//�� : 1 �� : 2 �� : 3 �� :4 
	int direction;
	int movecnt;

}Start;

queue<struct start>Q;


int map[MAX][MAX];
//�������� ������ �迭
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
char dir[4] = { '��','��','��','��' };
int r, c;


//�� : 1 �� : 2 �� : 3 �� :4 
int minimum = 10000;

void BFS(Start start) {

	while (!Q.empty()) {
		

		for (int i = 0; i < 4; i++) {
			

			if (map[x][y] == 1) {
				printf("���� : %c // ��ǥ : (%d,%d) �ش� �κ��� ���� �ش��մϴ�. \n\n", dir[i], x, y);
				continue;
			}

			//���� ���� �շ��ִ� ���!! 
			if (map[x][y] == 0) {

			}






		}


	}



}

int main() {


	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	int rstart, cstart, dirstart,movecnt;
	int rdestination, cdestination, dirdestination;

	cin >> rstart >> cstart >> dirstart;
	cin >> rdestination >> cdestination >> dirdestination;

	Start start;
	Start destination;

	start.x = rstart;
	start.y = cstart;
	start.direction = dirstart;
	start.movecnt = 0;


	destination.x = rdestination;
	destination.y = cdestination;
	destination.direction = dirdestination;




	Q.push(start);
	BFS(start);


}