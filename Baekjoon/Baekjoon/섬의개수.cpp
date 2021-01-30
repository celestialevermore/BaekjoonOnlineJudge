//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//using namespace std;
//
//int w = -1, h = -1;
//
//queue<pair<int, int>> Q;
//
//vector <int> island[100];
//int islandcnt = 0;
//int map[51][51];
//bool visited[51][51];
//bool caseforone= false;
//
//
//int dx[8] = { 1,-1,0,0,1,1,-1,-1};
//int dy[8] = { 0,0,1,-1,-1,1,-1,1};
//
//
//void BFS(pair<int, int> start) {
//
//
//	while (!Q.empty()) {
//		pair<int, int>current;
//		current.first=Q.front().first;
//		current.second = Q.front().second;
//		/*printf("(%d,%d) : ���� �������� �����մϴ�. \n\n",current.first,current.second);*/
//
//		Q.pop();
//		for (int i = 0; i < 8; i++) {
//			int x = current.first + dx[i];
//			int y = current.second + dy[i];
//
//			if (x < 0 || y < 0 || x >= h || y >= w) { /*printf("(%d,%d) : �ش������� ���� ���� ���Դϴ�.Ž���� �����մϴ�. \n\n", x, y); */continue; }
//			if (visited[x][y]) {/* printf("(%d,%d) : �ش� ������ �湮�� ���� �ֽ��ϴ�. Ž���� �����մϴ�. \n\n", x, y);*/ continue; }
//			if (map[x][y] == 0) {
//				/*printf("(%d,%d) : �ش� ������ �ٴٿ� �ش��մϴ�.\n\n", x, y);*/
//				continue;
//			}
//			if (map[x][y] == 1 && !visited[x][y]) {
//				/*printf("(%d,%d) : �ش� ������ �� ������ �ش��ϹǷ� Ž���� ����մϴ�. \n\n", x, y);*/
//				visited[x][y] = true;
//				
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				Q.push(next);
//
//			}
//
//		}
//		
//	}
//	
//}
//
//
//
//int main() {
//
//	
//
//
//	while (w != 0 && h != 0) {
//
//		cin >> w >> h;
//		//�ϴ� �޽��ϴ�.
//		if (w == 0 && h == 0) { break; }
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> map[i][j];
//			}
//		}
//		//0�� �ְԵǸ� 0�� ����ؾ��ϱ� ������
//		//�� ���θ� ���� �˻��մϴ�. 
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				if(map[i][j]==0){}
//				
//				if (map[i][j] != 0) {
//					caseforone = true; break;
//					//1�� �����Ѵ�.
//				}
//			}
//		}
//		//1�� ���� ���� ��� 
//		if (!caseforone) {
//			/*printf("1�� �����Ƿ� ���� �����ϴ�. Ž���� �����մϴ�. \n\n");*/
//			island[islandcnt].push_back(0); //�ƹ��͵� �����ϱ� �װ� �����Ѵ�.
//			islandcnt++; //���� ���ڸ� ���� ���� ���� �������� �Ѿ��. 
//		}
//
//		//1�� �����ϴ� ��� 
//		if (caseforone) {
//			int eachislandcnt = 0;
//			for (int i = 0; i < h; i++) {
//				for (int j = 0; j < w; j++) {
//					if (map[i][j] == 1&&!visited[i][j]) {
//						visited[i][j] = true;
//						pair<int, int>start;
//						start.first = i;
//						start.second = j;
//						/*printf("<<<(%d,%d) : �� �������� Ž���� �����մϴ�. >>>\n\n",start.first,start.second);*/
//						Q.push(start);
//						BFS(start);
//						eachislandcnt++;
//						/*printf("�� �ϳ��� �߰��߽��ϴ�. ���� ������ �Ѿ�ϴ�. \n\n");
//						printf("��������� ���� ���� : %d \n\n", eachislandcnt);*/
//					}
//				}
//			}
//			//���� ������ �� ���� 
//			island[islandcnt].push_back(eachislandcnt);
//			islandcnt++;
//
//		}
//
//
//		//�� ���� ���� ���ο� ���� ������ �޾ƾ� �ϹǷ� 
//		//��� ���� �ʱ�ȭ�մϴ�. 
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				visited[i][j] = false;
//				map[i][j] = 0;
//			}
//		}
//		caseforone = false;
//		while (!Q.empty()) {
//			Q.pop();
//		}
//
//
//
//
//	}
//
//
//	for (int i = 0; i < islandcnt; i++) {
//		for (int j = 0; j < island[i].size(); j++) {
//			printf("%d\n", island[i][j]);
//		}
//	}
//
//}