//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 1000001
//using namespace std;
//
//queue< pair<int, int>> Q;
//bool visited[MAX];
//int F, S, G, U, D;
//int flag = 0;
//void BFS(pair<int,int> now) {
//	if (S < G&&U==0&&D!=0) {
//		printf("use the stairs");
//		return;
//	}
//	if (S > G && U != 0 && D == 0) {
//		printf("use the stairs");
//		return;
//	}
//
//	while (!Q.empty()) {
//
//		pair<int, int> tmp; //���� bfs�� �����ϱ� ���� ���� ����
//
//		tmp.first = Q.front().first;
//		tmp.second = Q.front().second; 
//		
//		/*printf("(%d,%d) : ���� Q�� front�� �����Դϴ�.\n\n", Q.front().first, Q.front().second);
//		printf("(%d,%d) : �� ������ Q���� �������ݴϴ�. \n\n", Q.front().first, Q.front().second);*/
//		//���� ���ϴ� ������ ������ �ߴٸ�
//		if (Q.front().second == G) {
//			//printf("(%d,%d) / %d : ���ϴ� ������ �����Ͽ����ϴ�!! \n\n", Q.front().first, Q.front().second, G);
//			printf("%d", Q.front().first);
//			flag = 1;
//			break;
//		}
//		Q.pop();
//
//		int upanddown[2] = { U,-D };
//
//		//�� �Ʒ��� �̵��� �����մϴ�. 
//		for (int i = 0; i < 2; i++) {
//			pair<int, int>current;
//			current.first = tmp.first;
//			current.second = tmp.second;
//
//			int currentposition = current.second + upanddown[i];
//			//printf("(%d,%d) : �� �������� �̵��� �� ���θ� �����մϴ�. \n\n", current.first, currentposition);
//			
//		
//			//���� ��ġ�� 0�̰ų� �ǹ��� �ֻ�ܺ��� ���� ���
//			if (currentposition <= 0 || currentposition > F) {
//				//printf("(%d,%d) : �� ������ �ǹ��� ������ ����� ������ Q���� �����մϴ�.\n\n", current.first, currentposition);
//				continue;
//			}
//			//���� �湮�� �� ������ �����ߴٸ�
//			if (visited[currentposition]) {
//				//printf("(%d,%d) : �� ������ �̹� �湮�� ���� �ֱ� ������ �����մϴ�. \n\n", current.first, currentposition);
//				continue;
//			}
//			//���� �湮�� ���� ���� ���
//			if (!visited[currentposition]) {
//				//�湮������ ǥ�����ְ�
//				visited[currentposition] = true;
//				pair<int, int> next;
//				current.first++;
//				next.first = current.first;
//				next.second = currentposition;
//				/*printf("(%d,%d) : �� ������ ���� �湮�� ���� ���� ������ Q�� �ֽ��ϴ�. \n\n", current.first, currentposition);
//				printf("��������� �湮 ���: %d / ���� �� �� : %d\n\n", next.first, next.second);
//				printf("(%d,%d) : �� ������ Q���ٰ� �־��ݴϴ�. \n\n", next.first, next.second);*/
//				Q.push(next);
//			}
//		}
//	}
//	if (flag == 0) {
//		printf("use the stairs");
//	}
//
//	return;
//
//}
//
//int main() {
//
//	//cin >> F >> S >> G >> U >> D;
//	scanf("%d%d%d%d%d", &F, &S, &G, &U, &D);
//	pair<int, int> start;
//	start.first = 0;
//	start.second = S;
//
//	//�������� �翬�� ���� ��ġ�ϱ� �湮�� ���̴�.
//	visited[S] = true;
//
//	Q.push(start);
//	BFS(start);
//
//	return 0;
//}