//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//#include<vector>
//#define MAX 1000001
//using namespace std;
//
//int Subin, herbrother;
//
//int place[MAX];
//bool visited[MAX];
//int shortcutcnt = 0;
//int shortesttime = 0;
//int minsecond = 0;
//int flag = 0;
//queue<pair<int, int>>Q;
//
//void BFS(pair<int, int> start) {
//	pair<int, int>current;
//
//	while (!Q.empty()) {
//		current.first = Q.front().first;
//		current.second = Q.front().second;
//		Q.pop();
//		//���� �߰� ����..
//		if (current.first == herbrother&&flag==0) {
//			shortcutcnt++;
//			shortesttime = current.second;
//			visited[current.first] = true;
//			/*printf("���� �����߽��ϴ�!\n\n");
//			printf("��ǥ���� ���� ���� �ð� : %d �Դϴ�. \n\n", current.second);
//			printf("�������� ���� ���� �ð��� %d �Դϴ�. \n\n", shortesttime);
//			printf("������� �������� �����ϴ� ����� ����� �� : %d \n\n", shortcutcnt);
//			printf("���� ���޽ð��� %d�� ���������� flag�� 1�� �ٲ��ݴϴ�. \n\n", shortesttime);*/
//			flag = 1;
//		}
//		if (current.first == herbrother && current.second == shortesttime&&flag==1) {
//			printf("�� ��°�� �����߽��ϴ�!\n\n");
//			shortcutcnt++;
//			printf("������� �������� �����ϴ� ����� ����� �� : %d \n\n", shortcutcnt);
//			//�̰� ���ʷ� �ּ� ���� �ð��� �������� �ι� �����ϱ� �� �������� �ϳ� ���ݴϴ�.
//			
//		}
//		if (current.second > shortesttime && flag == 1) {
//			break;
//		}
//
//
//
//		if (!visited[current.first + 1] && current.first+1<MAX) {
//			place[current.first + 1] = 1;
//			
//			pair<int, int>next;
//			next.first = current.first + 1;
//			next.second = current.second;
//			next.second++;
//			printf("��ǥ : %d,Ž�� �ð� : %d ���� Ž���� �����մϴ�. \n\n", next.first, next.second);
//			
//			Q.push(next);
//		}
//		if (!visited[current.first -1] && current.first-1>=0) {
//			place[current.first - 1] = 1;
//			//visited[current.first - 1] = true;
//			pair<int, int>next;
//			next.first = current.first - 1;
//			next.second = current.second;
//			next.second++;
//			printf("��ǥ : %d,Ž�� �ð� : %d ���� Ž���� �����մϴ�. \n\n", next.first, next.second);
//			
//			Q.push(next);
//		}
//		if (!visited[current.first*2] && current.first*2<MAX) {
//			place[current.first*2] = 1;
//			//visited[current.first*2] = true;
//			pair<int, int>next;
//			next.first = current.first*2;
//			next.second = current.second;
//			next.second++;
//			//printf("��ǥ : %d,Ž�� �ð� : %d ���� Ž���� �����մϴ�. \n\n", next.first, next.second);
//			
//			Q.push(next);
//		}
//
//
//	}
//}
//
//
//int main() {
//
//	cin >> Subin >> herbrother;
//
//	pair<int, int>start;
//	start.first = Subin;
//	start.second = 0;
//
//	Q.push(start);
//	BFS(start);
//	shortcutcnt--;
//	printf("%d\n%d", shortesttime, shortcutcnt);
//}