//#include<stdio.h>
//#include<stack>
//#include<iostream>
//#include<algorithm>
//#define MAX 100000
//using namespace std;
//
//
//int K;
//stack<int>test;
//int input[MAX];
//int ans[MAX];
//int main() {
//
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> input[i];
//	}
//	for (int i = 0; i < K; i++) {
//
//		if (test.empty()) {
//			//printf("���� ��� ������ ����ֽ��ϴ�. \n\n");
//			test.push(input[i]);
//			//printf("���� ������ �ֻ�� : %d \n\n", test.top());
//		}
//		else {
//			if (input[i] == 0) {
//				//printf("���� ���� ���� ���Ұ� 0�̹Ƿ� ������ �ֻ���� �����մϴ�. \n\n");
//				test.pop();
//				//printf("���� ������ �ֻ�� : %d \n\n", test.top());
//			}
//			else {
//				test.push(input[i]);
//			}
//
//
//
//
//
//		}
//
//
//	}
//
//	int ans = 0;
//	while (!test.empty()) {
//		ans += test.top();
//		test.pop();
//	}
//	printf("%d", ans);
//
//
//
//}