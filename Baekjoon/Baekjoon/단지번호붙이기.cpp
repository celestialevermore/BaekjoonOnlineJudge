//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//
//int map[25][25];
//int visited[25][25];
//int n;
//int dangicnt[25];
//int index = 0;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,-1,0,-1 };
//
//int sum[25];
//
//void DFS(int rstart, int cstart) {
//	if (rstart < 0 || cstart < 0 || rstart > n - 1 || cstart > n - 1) { return; }
//	
//
//	////�������� Ž���� �ϴ� ����
//	//for (int i = 0; i < 4; i++) {
//	//	//���ٸ� ������� �� ���
//	//	if (map[rstart + dx[i]][cstart + dy[i]] == 0 || visited[rstart + dx[i]][cstart + dy[i]] == 1) {
//	//		printf("��!nn \n");
//	//		//�������� �Ѿ���� ��. 
//	//		return;
//	//	}
//	//	//���ٸ� ����� �ƴ� ���
//	//	else if (map[rstart + dx[i]][cstart + dy[i]] == 1 && visited[rstart + dx[i]][cstart + dy[i]] == 0) {
//	//		visited[rstart + dx[i]][cstart + dy[i]] = 1;
//	//		printf("���� index�� �� : %d \n", index);
//	//		dangicnt[index]++; 
//	//		printf("���� ���� �� �� : %d \n", dangicnt[index]);
//	//		//visited[rstart+dx[i]][cstart+dy[i]]=0; ���� ���ָ� �ȵ�. ���ο��� ���߿� for�� ���� ���������� �ɸ�
//	//		DFS(rstart + dx[i], cstart + dy[i]);
//	//	}
//	//	else { continue; }
//	//}
//	for (int i = 0; i < 4; i++) {
//		if (rstart < 0 || rstart >= n || cstart < 0 || cstart >= n) { continue; }
//		if (map[rstart][cstart] == 1 && visited[rstart][cstart] == 0) {
//			visited[rstart][cstart] = 1;
//			dangicnt[index]++;
//			DFS(rstart, cstart);
//		}
//	}
//
//}
//
//
//int main() {
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	
//	int rstart, cstart;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (map[i][j] == 1 && visited[i][j] == 0) {
//				rstart = i, cstart = j;
//				visited[i][j] = 1;
//				printf("���� �������� ��ǥ : (%d,%d) \n", i, j);
//				//dangicnt[index] = dangicnt[index] + 1;
//				printf("�������̹Ƿ� (%d,%d)���� ���� �ϳ� �߰����ݴϴ�. \n", rstart, cstart);
//				dangicnt[index]++;
//				DFS(i, j); 
//				//�� �̻� �� ������ ���� ��� ���� ������ ã�´�.
//				//�� ���� ���� �������� ���ϱ� ���� index++�� ���ְ� �Ѿ��. 
//				index++;
//			}
//			
//
//		}
//	}
//
//
//	sort(dangicnt, dangicnt + index);
//	for (int i = 0; i < index; i++) {
//		printf("%d ", dangicnt[i]);
//	}
//	printf("\n\n");
//	
//	
//}
