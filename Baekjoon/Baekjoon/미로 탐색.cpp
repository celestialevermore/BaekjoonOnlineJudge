//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//int map[8][8];
//int check[7][7];
//int count = 0;
//int move[2] = { -1,1 }; //-1�� ����, �׸��� �� +1�� ������, �׸��� �Ʒ�
//void DFS(int row, int col) {
//	//������ ����
//	if (row == 7 && col == 7) {
//		count++;
//	}
//	else {
//		//������ ������ ����� ���� ��
//		if (row >0 || row<8 || col>0 || col < 8) {
//			//������
//			if (map[row][col + 1] == 0) {
//				map[row][col + 1] = 1; //�ش� �湮
//				DFS(row, col + 1);
//				map[row][col + 1] = 0; //Ǯ���ش�. 
//			}
//			//����
//			if (map[row][col - 1] == 0) {
//				map[row][col - 1] = 1;
//				DFS(row, col - 1);
//				map[row][col - 1] = 0;
//			}
//			//����
//			if (map[row - 1][col]==0) {
//				map[row - 1][col] = 1;
//				DFS(row - 1, col);
//				map[row - 1][col] = 0;
//			}
//			//�Ʒ���
//			if (map[row + 1][col] == 0) {
//				map[row + 1][col] = 1;
//				DFS(row + 1, col);
//				map[row - 1][col] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	map[1][1] = 1;
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 7; j++) {
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//
//	DFS(1, 1);
//}