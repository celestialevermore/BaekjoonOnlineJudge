//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<string>
//#include<stack>
//using namespace std;
//
//
//int T;
//int recnt = 0;
//string s[1001];
//string re[1001];
//int main() {
//
//	
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> s[i];
//	}
//	/*for (int i = 0; i < T; i++) {
//		int top = s[i].size() - 1;
//		for (int j = top; j >= 0; j--) {
//			printf("%c \n", s[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//
//
//
//
//
//
//	for (int i = 0; i < T; i++) {
//		
//		int top = s[i].size();
//		//printf("�ش� ���ڿ��� �� ������ ��ġ�� %d �Դϴ�. \n\n",top);
//		stack<char> test;
//		for (int j = 0; j < top; j++) {
//			if (test.empty()) {
//				//printf("���� stack�� ������ϴ�. \n\n");
//				test.push(s[i][j]);
//				//printf("���� stack�� �ֻ�� : %c\n\n", test.top());
//			}
//			else {
//				if (test.top() == ')' && s[i][j] == '(') {
//					/*printf("���� stack�� �ֻ�� : %c ���� ���� ���� ��ȣ : %c\n\n", test.top(), s[i][j]);
//					printf("��ȣ�� ¦�� ���� �ʱ� ������ ���� ���� ��ȣ�� stack�� �ֽ��ϴ�. \n\n");*/
//
//					test.push(s[i][j]);
//					//printf("���� stack�� �ֻ�� : %c\n\n", test.top());
//				}
//				if (test.top() == s[i][j]) {
//					/*printf("���� stack�� �ֻ�� : %c ���� ���� ���� ��ȣ : %c\n\n", test.top(), s[i][j]);
//					printf("��ȣ�� ¦�� ���� �ʱ� ������ ���� ���� ��ȣ�� stack�� �ֽ��ϴ�. \n\n");*/
//
//					test.push(s[i][j]);
//					//printf("���� stack�� �ֻ�� : %c\n\n", test.top());
//				}
//
//
//
//				if (test.top() == '(' && s[i][j] == ')') {
//					/*printf("���� stack�� �ֻ�� : %c ���� ���� ���� ��ȣ : %c\n\n", test.top(), s[i][j]);
//					printf("��ȣ�� ¦�� �±⶧���� ���� stack�� �ֻ���� �����մϴ�. \n\n");*/
//					test.pop();
//					//printf("���� stack�� �ֻ�� : %c\n\n", test.top());
//				}
//			}
//
//
//		}
//		if (test.empty()) {
//			re[recnt] = "YES";
//			recnt++;
//		}
//		else {
//			re[recnt] = "NO";
//			recnt++;
//		}
//
//
//	}
//
//	for (int i = 0; i < T; i++) {
//		cout << re[i];
//		printf("\n");
//	}
//}