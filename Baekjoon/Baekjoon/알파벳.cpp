//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//
//int r, c;
//bool visited[91];
//char** map;
//int distlist[101];
//int distindex = 0;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int maxim = 0;
//
//
//void DFS(int dist,int rstart, int cstart) {
//	
//	//��ġ ������ �޽��ϴ�. 
//	pair<int, int>vertex;
//	vertex.first = rstart;
//	vertex.second = cstart;
//
//	/*printf("���� ���� ��ǥ : (%d,%d) \n\n\n", vertex.first, vertex.second);*/
//	for (int i = 0; i < 4; i++) {
//		//�׹���
//		int x = vertex.first + dx[i];
//		int y = vertex.second + dy[i];
//		if (x < 0 || y < 0 || x >= r || y >= c) {
//			/*printf("�ش� ��ǥ(%d,%d)�� ���� ��ġ�� ����� �˴ϴ�.\n\n", x, y);*/
//			continue;
//		}
//		//���ĺ��� üŷ�մϴ�.
//
//		if (visited[(int)map[x][y]] == true) {
//			/*printf("�ش� ��ǥ(%d,%d)�� �̹� �湮�Ͽ����ϴ�. \n\n", x, y);*/
//			continue;
//		}
//
//		//���� �湮�� ���� ���� ���ٸ�!!
//		if (!visited[(int)map[x][y]]) {
//			//�� ���� �湮��
//			/*printf("�ش� ��ǥ(%d,%d)�� ���� �湮�� ���� �����Ƿ� Ž���մϴ�.\n\n", x, y);*/
//			visited[(int)map[x][y]] = true; 
//			
//			DFS(dist+1,x, y);
//			//Ǯ������� �� �������� �̵��� �� �ִ�. 
//			visited[(int)map[x][y]] = false;
//		}
//
//
//
//
//	}
//	//�� �� ������ ���̻� �� ���� ���� ��쿡 �ش��մϴ�.
//	if (maxim < dist) {
//		maxim = dist;
//	}
////	printf("Ž���� �������Ƿ� �����մϴ�. �� ����� ���� ����� : %d �Դϴ�. \n\n", dist);
//	return;
//
//
//
//}
//
//int main() {
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		map = (char**)malloc(sizeof(char*) * r);
//	}
//	for (int i = 0; i < r; i++) {
//		map[i] = (char*)malloc(sizeof(char) * c);
//	}
//	for (int i = 0; i < r; i++) {
//		scanf("%s",map[i]);
//	}
//	//for (int i = 0; i < r; i++) {
//	//	printf("%s \n",map[i]);
//	//}
//	
//	pair<int, int> start;
//	start.first = 0;
//	start.second = 0;
//	visited[(int)map[0][0]] = 1;
//	//distlist[distindex]++;
//	//���������� DFS�� ����. 
//
//
//	DFS(1,start.first, start.second);
//
//
//	printf("%d", maxim);
//
//}