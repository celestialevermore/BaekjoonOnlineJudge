//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<stack>
//#define MAX 500000
//using namespace std;
//
//char input[100001];
//string order[MAX];
//int ordercnt = 0;
//int cursor = 0;
//int main() {
//
//
//	cin >> input;
//	int i = 0;
//	while (input[i] != '\0') { cursor++; i++; };
//	cursor--;
//	//printf("%c %d\n",input[cursor], cursor);
//
//
//	cin >> ordercnt;
//
//	for (int i = 0; i < ordercnt; i++) {
//		char order;
//		cin >> order;
//		if (order == 'P') {
//			char newch;
//			cin >> newch;
//			printf("���� ���� ���� : %c\n\n", newch);
//			stack<char>test;
//
//			
//				for (int i = cursor + 1; input[i] != '\0'; i++) {
//					test.push(input[i]);
//				}
//				input[++cursor] = newch;
//
//				while (!test.empty()) {
//					input[++cursor] = test.top();
//					printf("���� cursor�� ��ġ : %d, ���� ���� : %c", cursor, test.top());
//					test.pop();
//				}
//		
//			
//			printf("P ���� ��� :");
//			for (int i = 0; i < sizeof(input); i++) {
//				printf("%c", input[i]);
//			}
//			printf("\n");
//
//		}
//		if (order == 'L') {
//			if (cursor == -1) {
//				printf("���� cursor�� ���ڿ��� �� ���̹Ƿ� �ǳ� �ݴϴ�. \n\n");
//				continue;
//			}
//			else {
//				cursor--;
//			}
//		}
//		if (order == 'R') {
//			if (cursor == sizeof(input)) {
//				printf("���� cursor�� ���ڿ��� �� ���̹Ƿ� �ǳ� �ݴϴ�. \n\n");
//				continue;
//			}
//			else {
//				printf("���� cursor�� ��ġ�� �ڷ� �Ӵϴ�. \n\n");
//				cursor++;
//				printf("�ű� cursor�� ��ġ : %d\n\n", cursor);
//			}
//		}
//		if (order == 'B') {
//			if (cursor == -1) {
//				printf("���� cursor�� ��ġ�� �� ���̹Ƿ� ���� �� �����ϴ�. \n\n");
//				continue; }
//			else {
//				stack<char>test;
//
//				for (int i = cursor + 1; input[i] != '\0'; i++) {
//					test.push(input[i]);
//				}
//				input[cursor] = '_';
//				cursor--;
//				printf("���� cursor�� ��ġ : %d\n\n", cursor);
//				while (!test.empty()) {
//					input[++cursor] = test.top();
//					test.pop();
//				}
//				for (int i = 0; i < sizeof(input); i++) {
//					printf("%c", input[i]);
//				}
//			}
//		}
//
//
//	}
//
//	printf("%s", input);
//
//
//
//}