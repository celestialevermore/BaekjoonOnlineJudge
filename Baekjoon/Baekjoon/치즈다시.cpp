//#include<iostream>
//#include<queue>
//#include<algorithm>
////insideout[1] [0]�ǹ� ��Ȯ�� �Ұ�!!!!!!!!!!!!!!
//using namespace std;
//
//int map[101][101];
//bool insideout[1][101][101];
//bool visited[101][101];
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int time_ = 0;
//int N, M;
//typedef struct cheeze {
//	int x;
//	int y;
//	
//}C;
//
//queue<C>Q_for_outside;
//queue<C>Q_for_inside;
//bool istherecheeze() {
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			//���� ���� ����
//			if (map[i][j] != 0) {
//				return true;
//			}
//			
//		}
//	}
//	return false;
//}
//void BFS_for_insidechecking() {
//	C current;
//	while (!Q_for_inside.empty()) {
//		current = Q_for_inside.front();
//		Q_for_inside.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (map[x][y] == 1) { continue; }
//			if (map[x][y] == 0 && !insideout[1][x][y]&&!insideout[0][x][y] && x >= 1 && y >= 1 && x <= N && y <= M) {
//				
//				insideout[1][x][y] = true;
//				C next;
//				next.x = x;
//				next.y = y;
//				Q_for_inside.push(next);
//			}
//		}
//
//
//	}
//}
//void BFS_for_outsidechecking() {
//
//	C current;
//	while (!Q_for_outside.empty()) {
//		current = Q_for_outside.front();
//		Q_for_outside.pop();
//		
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//
//			if (map[x][y] == 1) { continue; }
//			if (!insideout[0][x][y] && map[x][y] == 0&&!insideout[1][x][y]&&x>=1&&y>=1&&x<=N&&y<=M) {
//				insideout[0][x][y] = true;
//				
//				C next;
//				next.x = x;
//				next.y = y;
//				Q_for_outside.push(next);
//			}
//		}
//
//
//	}
//	
//	
//}
//
//
//
//void findnextmelting() {
//
//	
//	//�ϴ� �ܺ����� ���������� Ȯ���ؾ��ϴϱ�.
//	//�����ڸ����� ġ� �����Ǿ����Ƿ�
//	C start;
//	start.x = 1;
//	start.y = 1;
//	Q_for_outside.push(start);
//	BFS_for_outsidechecking();
//
//
//
//
//	/*int tmap[101][101];
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			tmap[i][j] = map[i][j];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (insideout[0][i][j]) {
//				tmap[i][j] = 4;
//			}
//		}
//	}
//	printf("�ܺ� üŷ�� �Ϸ�� ���\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", tmap[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");*/
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (!insideout[0][i][j]&&map[i][j]==0&&!insideout[1][i][j]) {
//				insideout[1][i][j] = true;
//				C start;
//				start.x = i;
//				start.y = j;
//				
//				Q_for_inside.push(start);
//				BFS_for_insidechecking();
//			}
//		}
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (insideout[1][i][j]&&!insideout[0][i][j]) {
//				printf("inside x : %d y : %d\n\n", i, j);
//				tmap[i][j] = 3;
//			}
//		}
//	}
//	printf("���� üŷ�� �Ϸ�� ���\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", tmap[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");*/
//
//
//
//
//	//ġ� ������ Ȯ���ϸ鼭 ���� 0�̸鼭, �ܺ��� �������� ������ 
//	//2�̻��� ���, �ش� ���� 2�� �ٲ��ش�.
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 1) {
//				int cnt = 0;
//				for (int k = 0; k < 4; k++) {
//					int x = i + dx[k];
//					int y = j + dy[k];
//					if (map[x][y] == 0 && !insideout[1][x][y]&&insideout[0][x][y]) {
//						cnt++;
//					}
//				}
//				if (cnt >= 2) {
//					map[i][j] = 2;
//					insideout[0][i][j] = true;
//					insideout[1][i][j] = false;
//				}
//				else {
//					continue;
//				}
//			}
//		}
//	}
//	/*printf("������ ��Ե� ġ���� ������ 1->2�� �ٲٴ� �۾��� �Ϸ�Ǿ����ϴ�.\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");*/
//}
//
//void melt() {
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (map[i][j] == 2) {
//				map[i][j] = 0;
//			}
//		}
//	}
//	
//	//printf("one time melting process is done!\n\n");
//	time_++;
//	//printf("current time : %d \n\n", time_);
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");*/
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			insideout[0][i][j] = false;
//			if (insideout[1][i][j]) {
//				insideout[1][i][j] = false;
//			}
//		}
//	}
//}
//
//int main() {
//
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//
//
//
//	while (istherecheeze()) {
//
//		//printf("<<<<<find next melting area>>>>>\n\n");
//		findnextmelting();
//		//printf("<<<<<melting>>>>>\n\n");
//		melt();
//		if (time_ > 100000) {
//			break;
//		}
//	}
//	if (time_ > 100000) {
//		printf("0");
//	}
//	else {
//		printf("%d", time_);
//	}
//	
//}
