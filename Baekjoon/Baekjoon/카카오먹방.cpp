//#include<stdio.h>
//#include<vector>
//#include<stdlib.h>
//
//using namespace std;
//
//int main() {
//	int N;
//
//	scanf("%d", &N);
//
//	int* process = (int*)malloc(sizeof(int) * (N + 1));
//	process[0] = 0;
//
//	for (int i = 1; i < N + 1; i++) {
//		scanf("%d", &process[i]);
//	}
//	
//	int K; // ���� �ð� üũ 
//	scanf("%d", &K);
//	int current = 1;
//
//	while (1) {
//		if (current == N + 1) {
//			current = 1;
//		}//current�� ���μ��� ������ �Ѿ�� �ٽ� 1�� �ʱ�ȭ�� ��ŵ�ϴ�.
//
//		//ó���ؾ� �� �۾��� �ִٸ�
//		if (process[current] != 0) {
//			process[current]--;
//			K--;//�����ð��� ���
//			current++; //�� ���� ��⿭�� ó���Ϸ� ��ĭ �Ű��ݴϴ�.
//		}
//		//���� ó���ؾ� �� �۾��� ���ٸ� 
//		else {
//			current++;
//		}
//		//������ �Ǿ���� ������
//		if (K == 0) { 
//			
//			int flag = N;
//			//���� ��� �۾��� �����ִ� ���¶��
//			for (int i = 1; i < N + 1; i++) {
//				if (process[i] == 0) { flag-- ; }
//			}
//			//���̻� ó���ؾ��� �۾��� �����Ƿ� -1�� ������ش�. 
//			if (flag == 0) { printf("-1"); }
//
//			else {
//				if (current == N + 1) {
//					current = 1;
//					for (current; current < N + 1; current++) {
//						if (process[current] != 0) {
//							printf("%d", current);
//						}
//
//					}
//				}
//				else {
//					printf("%d", current);
//				}
//			}
//
//				//printf("%d", current);
//			
//			
//			break; }
//	}
// }