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
//	bool isch;
//	bool nextm;
//}C;
//
//queue<C>Q_for_outside;
//
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
//
//void BFS_for_outsidecheking() {
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
//
//			if (!insideout[0][x][y] && map[x][y] == 0&&!insideout[1][x][y]) {
//				insideout[0][x][y] = true;
//				insideout[1][x][y] = true;
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
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (!insideout[0][i][j] && map[i][j] == 0&&!insideout[1][i][j]) {
//				printf("�ش� ��ǥ x : %d y : %d �� �ܺ������� ���� �����Դϴ�!\n\n", i, j);
//				
//			}
//		}
//	}*/
//}
//
//
//
//void findnextmelting() {
//
//
//	//�ϴ� �ܺ����� ���������� Ȯ���ؾ��ϴϱ�.
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//
//			if (!insideout[0][i][j] && map[i][j] == 0) {
//				insideout[0][i][j] = true;
//				insideout[1][i][j] = true;
//				C start;
//				start.x = i;
//				start.y = j;
//				start.isch = false;
//				start.nextm = false;
//				Q_for_outside.push(start);
//				BFS_for_outsidecheking();
//			}
//
//
//		}
//	}
//	printf("���ܺ� �˻簡 ��� Ȯ�εǾ����ϴ�.\n\n");
//	int smap[101][101];
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			smap[i][j] = map[i][j];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (!insideout[0][i][j] && map[i][j] == 0 && !insideout[1][i][j]) {
//				printf("�ش� ��ǥ x : %d y : %d �� �ܺ������� ���� �����Դϴ�!\n\n", i, j);
//				smap[i][j] = 3;
//			}
//			if (insideout[1][i][j] && map[i][j] == 0 && insideout[0][i][j]) {
//				smap[i][j] = 4;
//			}
//		}
//	}
//
//	printf("�ӽ� �� \n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", smap[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
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
//					if (map[x][y] == 0 && !insideout[1][x][y]) {
//						cnt++;
//					}
//				}
//				if (cnt >= 2) {
//					map[i][j] = 2;
//				}
//				else {
//					continue;
//				}
//			}
//		}
//	}
//	printf("������ ��Ե� ġ���� ������ 1->2�� �ٲٴ� �۾��� �Ϸ�Ǿ����ϴ�.\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
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
//	printf("one time melting process is done!\n\n");
//	printf("current time : %d\n\n", time_-16843008);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
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
//		findnextmelting();
//		melt();
//		time_++;
//	}
//	printf("%d", time_-16843008);
//}
