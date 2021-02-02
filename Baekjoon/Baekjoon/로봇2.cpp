//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<queue>
//#define MAX 101
//using namespace std;
//
//
//typedef struct start {
//	int x;
//	int y;
//	//�� : 1 �� : 2 �� : 3 �� :4 
//	int direction;
//	int movecnt;
//
//}Start;
//
//
//Start start;
//Start destination;
//
//queue<struct start>Q;
//
//
//int map[MAX][MAX];
////�������� ������ �迭
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//char dir[4] = { '��','��','��','��' };
//int r, c;
//
//
////�� : 1 �� : 2 �� : 3 �� :4 
//int minimum = 10000;
//
//void BFS(Start start) {
//
//	while (!Q.empty()) {
//		Start current;
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.direction = Q.front().direction;
//		current.movecnt = Q.front().movecnt;
//
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x+dx[i];
//			int y = current.y+dy[i];
//			int direction = i;
//			if (map[x][y] == 1) {
//				printf("���� : %c // ��ǥ : (%d,%d) �ش� �κ��� ���� �ش��մϴ�. \n\n", dir[i], x, y);
//				continue;
//			}
//			if (x == destination.x && y == destination.y) {
//				if (current.direction != destination.direction) {
//					current.direction = destination.direction;
//					current.movecnt++;
//					if (current.movecnt < minimum) {
//						minimum = current.movecnt;
//					}
//				}
//
//			}
//
//
//
//			//���� ���� �շ��ִ� ���!! 
//			if (map[x][y] == 0) {
//
//				//������ Ȯ���ؾߵ�... ���������� �������� 
//				//������ ��� �� : 1
//				if (direction == 0) {
//					//������ �ѹ� �ٲ��ش�.
//					//�����̴ϱ� 1�� �ٲ���
//					current.direction = 1;
//					printf("%c���� �շ� �����Ƿ� �ش� �������� �κ��� ����Ű�� �մϴ�. \n\n", dir[i]);
//					//�׷��� ������ ����� �ѹ� ����
//					
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("�̿� �κ��� ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�.\n\n",before,current.movecnt);
//
//					//���� ������ ��� ��. 
//					//���� ����, ���� ��ġ���� 1�� ���� �������� �Ÿ��� ��������� �մϴ�. 
//
//					int yy = y;
//					int move = 0;
//
//					//0 : ���ٸ� �κ��� �����ų�, Ȥ�� ���� ������ ������� ��� �������� 
//					//�̵��ؾ��ϴ� ��츦 �������� �Ѵ�. 
//					while (map[x][yy] == 1 || yy < c) {
//						yy++;
//						move++;
//					}
//					//���� �̵� ����� 3���� �۴ٸ�, (
//					if (move >= 0 && move <= 3) {
//						printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//						current.y = current.y + move;
//						printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move�� 3���� Ŀ�� ������
//					//���� ��� 4��ŭ �����Ѵٸ� 3���� ���� ��ŭ 3�� �̵��ϰ� ��������ŭ �̵��� ����� �Ѵ�. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2�� �ϳ��ε�, ���⼭ �� 0�� ���� ������� �Ѵ�. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.y = current.y + 3;
//							printf("�κ��� �̵��� 3��ŭ �����Ͽ� �ݴϴ�.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.y = current.y + move;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.y = current.y + move3div;
//							printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�. \n\n", current.y);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.y = current.y + move3div;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//						}
//
//					}
//
//				}
//				//���ʿ� ���� �շ� �ִ� ��� 
//				if (direction == 1) {
//					//������ �ѹ� �ٲ��ش�.
//					//�����̴ϱ� 2�� �ٲ���� �Ѵ�.
//					current.direction = 2;
//					printf("%c���� �շ� �����Ƿ� �ش� �������� �κ��� ����Ű�� �մϴ�. \n\n", dir[i]);
//					//�׷��� ������ ����� �ѹ� ����
//
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("�̿� �κ��� ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�.\n\n", before, current.movecnt);
//
//					//���� ������ ��� ��. 
//					//���� ����, ���� ��ġ���� 1�� ���� �������� �Ÿ��� ��������� �մϴ�. 
//
//					int yy = y;
//					int move = 0;
//
//					//1 : ���ٸ� �κ��� �����ų�, Ȥ�� ���� ������ ������� ��� �������� 
//					//�̵��ؾ��ϴ� ��츦 �������� �Ѵ�. 
//					while (map[x][yy] == 1 || yy >= 0) {
//						yy--;
//						move++;
//					}
//					//���� �̵� ����� 3���� �۴ٸ�, (
//					if (move >= 0 && move <= 3) {
//						printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//						current.y = current.y - move;
//						printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move�� 3���� Ŀ�� ������
//					//���� ��� 4��ŭ �����Ѵٸ� 3���� ���� ��ŭ 3�� �̵��ϰ� ��������ŭ �̵��� ����� �Ѵ�. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2�� �ϳ��ε�, ���⼭ �� 0�� ���� ������� �Ѵ�. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.y = current.y - 3;
//							printf("�κ��� �̵��� 3��ŭ �����Ͽ� �ݴϴ�.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.y = current.y + 3;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.y = current.y - move3div;
//							printf("�κ��� �̵��� %d��ŭ �������� �����Ͽ� �ݴϴ�. \n\n", current.y);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.y = current.y - move3div;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//						}
//
//					}
//				}
//				//������ �շ��ִ� ��� 
//				if (direction == 2) {
//					//������ �ѹ� �ٲ��ش�.
//					//�����̴ϱ� 1�� �ٲ���
//					current.direction = 3;
//					printf("%c���� �շ� �����Ƿ� �ش� �������� �κ��� ����Ű�� �մϴ�. \n\n", dir[i]);
//					//�׷��� ������ ����� �ѹ� ����
//
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("�̿� �κ��� ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�.\n\n", before, current.movecnt);
//
//					//���� ������ ��� ��. 
//					//���� ����, ���� ��ġ���� 1�� ���� �������� �Ÿ��� ��������� �մϴ�. 
//
//					int xx = x;
//					int move = 0;
//
//					//0 : ���ٸ� �κ��� �����ų�, Ȥ�� ���� ������ ������� ��� �������� 
//					//�̵��ؾ��ϴ� ��츦 �������� �Ѵ�. 
//					while (map[xx][y] == 1 || xx < r) {
//						xx++;
//						move++;
//					}
//					//���� �̵� ����� 3���� �۴ٸ�, (
//					if (move >= 0 && move <= 3) {
//						printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//						current.x = current.x + move;
//						printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move�� 3���� Ŀ�� ������
//					//���� ��� 4��ŭ �����Ѵٸ� 3���� ���� ��ŭ 3�� �̵��ϰ� ��������ŭ �̵��� ����� �Ѵ�. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2�� �ϳ��ε�, ���⼭ �� 0�� ���� ������� �Ѵ�. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.x = current.x + 3;
//							printf("�κ��� �̵��� 3��ŭ �����Ͽ� �ݴϴ�.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.x = current.x + move;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.x = current.x + move3div;
//							printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�. \n\n", current.x);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.x = current.x + move3div;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//						}
//
//					}
//
//				}
//				//������ ��� 
//				if (direction == 3) {
//					//������ �ѹ� �ٲ��ش�.
//					//�����̴ϱ� 1�� �ٲ���
//					current.direction = 4;
//					printf("%c���� �շ� �����Ƿ� �ش� �������� �κ��� ����Ű�� �մϴ�. \n\n", dir[i]);
//					//�׷��� ������ ����� �ѹ� ����
//
//					int before = current.movecnt;
//					current.movecnt++;
//					printf("�̿� �κ��� ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�.\n\n", before, current.movecnt);
//
//					//���� ������ ��� ��. 
//					//���� ����, ���� ��ġ���� 1�� ���� �������� �Ÿ��� ��������� �մϴ�. 
//
//					int xx = x;
//					int move = 0;
//
//					//0 : ���ٸ� �κ��� �����ų�, Ȥ�� ���� ������ ������� ��� �������� 
//					//�̵��ؾ��ϴ� ��츦 �������� �Ѵ�. 
//					while (map[xx][y] == 1 || xx >= 0) {
//						xx--;
//						move++;
//					}
//					//���� �̵� ����� 3���� �۴ٸ�, (
//					if (move >= 0 && move <= 3) {
//						printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�.\n\n", move);
//						int before = current.movecnt;
//						current.movecnt++;
//						printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//						current.x = current.x - move;
//						printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//
//						Q.push(current);
//					}
//					//move�� 3���� Ŀ�� ������
//					//���� ��� 4��ŭ �����Ѵٸ� 3���� ���� ��ŭ 3�� �̵��ϰ� ��������ŭ �̵��� ����� �Ѵ�. 
//					if (move > 3) {
//						int move3cnt = move / 3;
//						int move3div = move % 3; //0,1,2�� �ϳ��ε�, ���⼭ �� 0�� ���� ������� �Ѵ�. 
//
//						int index = 0;
//						while (index < move3cnt) {
//							current.x = current.x - 3;
//							printf("�κ��� �̵��� 3��ŭ �����Ͽ� �ݴϴ�.\n\n");
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.x = current.x - move;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//							index++;
//						}
//						if (move3div == 1 || move3div == 2) {
//							current.x = current.x - move3div;
//							printf("�κ��� �̵��� %d��ŭ �����Ͽ� �ݴϴ�. \n\n", current.x);
//							int before = current.movecnt;
//							current.movecnt++;
//							printf("�κ��� �̵��� ��ŭ ��� ����� %d -> %d�� �����Ͽ� �ݴϴ�. \n\n", before, current.movecnt);
//							current.x = current.x - move3div;
//							printf("(%d,%d) : ���� �κ��� ��ġ�Դϴ�. \n\n", current.x, current.y);
//						}
//
//					}
//
//				}
//
//
//			}
//
//
//
//
//
//
//		}
//
//
//	}
//
//
//
//}
//
//int main() {
//
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int rstart, cstart, dirstart,movecnt;
//	int rdestination, cdestination, dirdestination;
//
//	cin >> rstart >> cstart >> dirstart;
//	cin >> rdestination >> cdestination >> dirdestination;
//
//
//	start.x = rstart-1;
//	start.y = cstart-1;
//	start.direction = dirstart;
//	start.movecnt = 0;
//
//
//	destination.x = rdestination-1;
//	destination.y = cdestination-1;
//	destination.direction = dirdestination;
//
//
//
//
//	Q.push(start);
//	BFS(start);
//
//
//}