//#include<stdio.h>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N, M, H;
//
//bool Line[1001][1001];
//int Map[1001][1001];
//int LeftorRight[2] = { -1,1 };
//bool visited[1001][1001];
//
//void DFS(int r, int c) {
//	
//	if (r == M) { printf("�����߽��ϴ�. ���� ���� ��ġ : (%d,%d), %d�Դϴ�.\n",r,c,c); return; }
//
//
//	//���� �ֿ� �������ٰ� ���� �̾��� ���� Ȯ���ϸ�?
//	if (Line[r][c]) {
//		for (int i = 0; i < 2; i++) {
//			if (c + LeftorRight[i] <= 0 || c + LeftorRight[i] > N) {
//				printf("(%d,%d) : �ش� ���� �̾��� ������ ��ٸ� ������ ����Ƿ� Ž���� �����մϴ�.\n\n", r, c + LeftorRight[i]);
//				continue;
//			}
//
//
//
//		}
//		//���� ���� �̾��� ���� ������ �߰��Ѵٸ�?
//		if (!Line[r][c]) {
//			DFS(r + 1, c);
//		}
//
//
//
//	}
//}
//
//int main() {
//
//	cin >> N >> M >> H;
//	int rForLine, cForLine;
//
//	//���� �� �ִ� ���μ��� �⺻ ���� 
//	for (int i = 0; i < M; i++) {
//		cin >> rForLine >> cForLine;
//		Line[rForLine][cForLine] =true;
//		Line[rForLine][cForLine + 1] = true;
//		
//		//���μ��� �̾��ֱ� ����
//	}
//
//	//�״��� �������� ���� ��ŭ DFS�� �����ش�.
//	/*for (int i = 1; i < N + 1; i++) {
//		DFS(1, i);
//	}*/
//	DFS(1, 1);
//
//}
