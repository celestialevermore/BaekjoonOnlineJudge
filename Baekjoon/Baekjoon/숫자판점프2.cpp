//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<string>
//#define MAX 1001
//using namespace std;
//
//string map[6][6];
//bool visited[6][6];
//int digit[10];
//
//string input;
//int stringcnt = 0;
//string stringlist[MAX];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//bool checking(string input) {
//	for (int i = 0; i < MAX; i++) {
//		if (input == stringlist[i]) {
//			printf("�̹� �ش� ���ڿ��� �����մϴ�.\n\n");
//			return true; break;
//		}
//	}
//	return false;
//}
//
//
//void DFS(pair<int, int>start, int Level) {
//	if (Level == 5) {
//		printf("��������� ���ڿ��� ����Ͽ� stringlist�� �־��ݴϴ�.\n\n");
//		input.append(map[start.first][start.second]);
//		stringlist[stringcnt] = input;
//		stringcnt++;
//		printf("��������� ���ڿ� ���� : %d\n\n", stringcnt);
//		return;
//	}
//
//	else {
//		for (int i = 0; i < 4; i++) {
//			int x = start.first + dx[i];
//			int y = start.second + dy[i];
//			if (x < 0 || y < 0 || x>4 || y>4) {
//				printf("��ǥ (%d,%d)�� ������ ������ ����ϴ�. Ž���� �����ؾ��մϴ�!!\n\n", x, y);
//				continue;
//			}
//			
//			else {
//				printf("���� ��ǥ : (%d,%d) ���� Level : %d\n\n", x, y,Level);
//				input.append(map[x][y]);
//				printf("������� ���� ���ڿ� :");
//				cout << input << "\n\n";
//				Level++;
//				pair<int, int>next;
//				next.first = x;
//				next.second = y;
//				DFS(next, Level);
//			}
//
//		}
//
//
//
//	}
//
//}
//
//
//
//
//int main() {
//	/*string test1;
//	cin >> test1;
//	string test2;
//	cin >> test2;
//	test1.append(test2);
//	cout << test1;*/
//
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			pair<int, int>start;
//			start.first = i;
//			start.second = j;
//			int Level = 0;
//			input.append(map[i][j]);
//			cout << input << endl;
//			printf("�����ϴ� ���ڿ�\n\n");
//
//			printf("���ʽ��� // DFS(%d,%d,%d)���� Ž���� �����մϴ�. \n\n", start.first, start.second, Level);
//			DFS(start, Level);
//			input = "";
//		}
//	}
//
//	//printf("%d", stringcnt);
//
//}