//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#define MAX 1001
//
//using namespace std;
//
//int N;
//int stack[MAX];
//int top = 0;
//int receiving[MAX];
//
//int main() {
//
//	cin >> N;
//
//	receiving[0] = 0;
//	receiving[1] = 0;
//	int flag = 0;
//
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		for (int i = top; i >= 0; i--) {
//			printf("<<���� %d �� %d�� ���մϴ�!!>>\n\n", input, stack[i]);
//			if (stack[i] > input) {
//				printf("%d > %d �̹Ƿ� �ش� �������� ��ȣ�� ���� �� �ֽ��ϴ�.\n\n", stack[i], input);
//				printf("���� %d�� ���ÿ� �־��ְ�, ���� �� ó�� ������ ����ž�� �ε����� �����ϴ�. \n\n", input);
//				printf("���� top : %d \n\n", top);
//				printf("���� top�� �ش��ϴ� ���� : %d \n\n", stack[top]);
//				stack[++top] = input;
//				
//
//				printf("���� ���� �� ���� : %d\n\n", i);
//				receiving[top] = i;
//				flag = 1;
//				break;
//			}
//			else {
//
//			}
//
//
//		}
//		if (flag == 0) {
//
//			printf("%d > %d �̹Ƿ� �ش� �������� ��ȣ�� ���� �� �����ϴ�.\n\n", stack[i], input);
//			printf("���� %d�� ���ÿ� �־��ְ� ���� %d���� ���� ž�� �������� �����Ƿ� �ش� �ε������� 0�� �ֽ��ϴ�. \n\n", input, input);
//			stack[++top] = input;
//			receiving[top] = 0;
//
//		}
//	}
//
//
//	for (int i = 1; i <= top; i++) {
//		printf("%d ", receiving[i]);
//	}
//
//}