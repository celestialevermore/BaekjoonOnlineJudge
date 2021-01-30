//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//#include<vector>
//using namespace std;
//
//
//char map[1000][1000];
//bool sheep[1000][1000];
//bool visited[1000][1000];
////������ ũ�Ⱑ �־�����. 
//int R, C;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int flag = 0;
//int flag2 = 0;
//queue< pair<int, int>> Q;
//
//void BFS(pair<int,int> start) {
//
//	while (!Q.empty()) {
//		pair<int, int> current;
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		/*printf("���� // (%d,%d) : ���� ť�� �� ���� ��ǥ�Դϴ�. \n\n", current.first, current.second);*/
//		Q.pop();
//
//
//
//
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.first+dx[i];
//			int y = current.second+dy[i];
//			if (x<0 || y<0 || x>=R || y>=C) {/* printf("���� // (%d,%d) : ���� ��ġ�� �������� ����Ƿ� Ž���� �����մϴ�.\n\n",x,y);*/ continue; }
//			
//			if (visited[x][y] == true&&sheep[x][y]==true) {
//				/*printf("���� // (%d,%d) : �ش� ��ġ�� ��Ÿ���� ��ġ�� �����Դϴ�. �׸��� ���� �����մϴ�.\n\n", x, y); 
//				printf("���� // (%d,%d) : �ش� ��ġ�� ��Ÿ���� ��ġ�Ǿ����ϴ�. \n\n", x, y);*/
//				map[x][y] = 'D';
//				continue;
//			}
//			if (map[x][y] == 'W') {
//				//printf("���� // (%d,%d) : �ش� ��ġ���� �̹� ���밡 �����մϴ�. \n\n", x, y);
//				continue;
//			}
//			if (map[x][y] == '.' && !visited[x][y]) {
//				//printf("���� // (%d,%d) : ���� ���� �׳� �ʿ��̴� ���밡 �̵��մϴ�. \n\n", x, y);
//				visited[x][y] = true;
//				pair<int, int> next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//			}
//		}
//	}
//
//
//
//}
//
//
//
//int main() {
//	cin >> R >> C;
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//		printf("\n");
//	}
//	pair<int, int> Sheeplocation[1001];
//	pair<int, int>Wolvelocation[1001];
//	int Sheepindex = 0;
//	int Wolveindex = 0;
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'S') {
//				int x = i;
//				int y = j;
//				Sheeplocation[Sheepindex].first = x;
//				Sheeplocation[Sheepindex].second = y;
//				Sheepindex++;
//				//printf("�� // %d��° Ȯ�ε� ���� ��ġ : (%d,%d)�Դϴ�. \n\n", Sheepindex, x, y);
//
//	
//			}
//		}
//	}
//	printf("\n\n");
//	/*for (int i = 0; i < Sheepindex; i++) {
//		int x = Sheeplocation[i].first;
//		int y = Sheeplocation[i].second;
//
//		printf("�� // %d��° Ȯ�ε� ���� ��ġ : (%d,%d)�Դϴ�. \n\n", i, x, y);
//		printf("�ش� ���� ��ġ���� ���Ʒ� ���� ������ ��ǥ�� ����մϴ�. \n\n");
//		for (int i = 0; i < 4; i++) {
//			int xx = x + dx[i];
//			int yy = y + dy[i];
//			printf("(%d,%d) \n", xx, yy);
//		}
//		printf("\n\n");
//
//
//	}*/
//
//
//
//	for (int i = 0; i < Sheepindex; i++) {
//		for (int j = 0; j < 4; j++) {
//			int x = Sheeplocation[i].first+dx[j];
//			int y = Sheeplocation[i].second+dy[j];
//			if (x < 0 || y < 0 || x >= R || y >= C) { 
//				//printf("�� // (%d,%d) : �ش� ���� ������ ������ �Ѿ�ϴ�. \n\n", x, y); 
//				continue; 
//			}
//			
//			if(!visited[x][y]){
//				//printf("(%d,%d) : �ش� ���� ���� ������ �ش��ϹǷ� �� �������� ��Ÿ���� ���� �� �ֽ��ϴ�. \n\n", x, y);
//				sheep[x][y] = true;
//				visited[x][y] = true;
//				continue;
//			}
//		
//		}
//
//	}
//
//
//	//���븦 Ȯ���ϴ� ����
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'W') {
//				int x = i, y = j;
//				Wolvelocation[Wolveindex].first = x;
//				Wolvelocation[Wolveindex].second = y;
//				Wolveindex++;
//				//printf("���� // %d��° Ȯ�ε� ������ ��ġ : (%d,%d)�Դϴ�. \n\n",Wolveindex, x, y);
//			}
//		}
//	}
//	
//	//���� ���밡 �� �Ѹ����� ���ٸ�?
//	if (Wolveindex == 0) {
//		printf("1\n");
//		//printf("���밡 �� �� ������ �������� �ʽ��ϴ�. \n\n");
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				if (map[i][j] == '.') {
//					map[i][j] = 'D';
//					break;
//				}
//			}
//			break;
//		}
//	
//	}
//	else {
//		for (int i = 0; i < Wolveindex; i++) {
//			int x = Wolvelocation[i].first;
//			int y = Wolvelocation[i].second;
//			if (visited[x][y] == true) {
//				//printf("���� // (%d,%d) : �ش� ������ ��� ���������̹Ƿ� ��Ÿ���� ��ġ�� �� �����ϴ�.\n\n", x, y);
//				printf("0");
//				flag = 1; flag2 = 2;
//				break;
//			}
//		}
//		
//
//
//		if (flag2 == 0) {
//			for (int i = 0; i < Wolveindex; i++) {
//				for (int j = 0; j < 4; j++) {
//					int x = Wolvelocation[i].first + dx[j];
//					int y = Wolvelocation[i].second + dy[j];
//					if (x < 0 || y < 0 || x >= R || y >= C) { /*printf("���� // (%d,%d) : �ش� ���� ������ ������ �Ѿ�ϴ�. \n\n", x, y);*/ continue; }
//					//���� �ٷ� ���� ���� �����Ѵ�!! 
//
//					if (map[x][y] == 'S') {
//						//printf("���� // (%d,%d) : �ش����� �ٷ� ���� �����ϹǷ� ��Ÿ���� ��ġ�� �� �����ϴ�. 0�� ��ȯ�ϰ� �����մϴ�. \n\n\n", x, y);
//						printf("0");
//						flag = 1;
//						break;
//					}
//				}
//			}
//		}
//	}
//
//
//	//���뵵 �ְ�, ��� ��ó�� ���� �ٴٸ��� ���� ��Ȳ�̶��
//	//�̶� ��μ� BFS�� ������ �����մϴ�. 
//	
//	if(flag==0){
//		for (int i = 0; i < Wolveindex; i++) {
//			int x = Wolvelocation[i].first;
//			int y = Wolvelocation[i].second;
//			pair<int, int>start;
//			start.first = x;
//			start.second = y;
//			Q.push(start);
//			BFS(start);
//		}
//		printf("1\n");
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C; j++) {
//				printf("%c", map[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//	
//	
//
//	return 0;
//
//}