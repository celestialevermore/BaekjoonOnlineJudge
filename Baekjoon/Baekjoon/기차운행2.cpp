//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<stack>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//
//	char PO[51];
//	int POindex = 0;
//
//	int* train = (int*)malloc(sizeof(int) * N);
//	//���� ���� �Է¹޽��ϴ�. 
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &train[i]);
//
//	}
//
//	int Intersection[51];
//	int top = -1;
//
//
//	int RightSequence[51];
//	//index�� ���� ���󿡼� ���� j�� ���մϴ�.
//	int index = 0;
//	//������� ���ڰ� �� �迭�� ����ϴ�.
//	for (int i = 0; i < 51; i++) {
//		RightSequence[i] = i;
//	}
//
//
//
//	for (int i = 0; i < N; i++) {
//
//		//���� �����ΰ� ����ٸ� 
//		if (top == -1) {
//			Intersection[++top] = train[i]; //train�� �ϳ� �ֽ��ϴ�. 
//			PO[POindex] = 'P'; //P�� ����մϴ�.
//			POindex++; //�׸��� ������ ����Ͽ� ����� �� �ֵ��� �ε����� �����մϴ�.
//		}
//
//		//���� ������ �ȿ� ���� �ִٸ�
//		//���ĵ� �迭�� ������ �� ���� ���Ҹ� ���� �ϳ��� �񱳸� �����մϴ�.
//		else if (Intersection[top] == RightSequence[index]) {
//			PO[POindex] = 'O'; POindex++; //'O'�� ����� �� PO�ε����� ������ŵ�ϴ�.
//			Intersection[top--] = 0;  //�ش� top�� ��ġ���� Ȯ���Ͽ����� �����մϴ�.
//			index++; // ���� ���ҿ��� �񱳸� ���� �ε����� ������ŵ�ϴ�.
//
//			//�׸��� �����ο� �����ִ� �͵��� ������ ���մϴ�.
//			for (top; top > -1; top--) {
//				//��ġ�Ѵٸ� ������ index�� �����մϴ�.
//				if (Intersection[top] == RightSequence[index]) {
//					PO[POindex] = 'O'; POindex++;
//					Intersection[top--] = 0;
//					index++;
//				}
//				//top�� ��ġ���� �ʴ´ٸ� top�Ʒ��� �͵�� ���� �� �����Ƿ�
//				//for���� �������´�. 
//				else { break; }
//			}
//
//			
//
//
//		}
//		//�����ΰ� ��������� ������, ���ĵ� �Ͱ� �ٸ� ���� ���� ���ο� ���� �߰��� �� �ֽ��ϴ�. 
//		else { Intersection[top] = RightSequence[index]; top++; PO[POindex] = 'P'; POindex++; }
//
//	}
//
//	
//	
//	if (top != -1) {
//
//		printf("Impossible \n");
//	}
//	else {
//		//���� ����� ����ϸ� �˴ϴ�. 
//		for (int i = 0; i < 51; i++) {
//			if (PO[i] != 'P' && PO[i] != 'O') { break; }
//			else {
//				printf("%c ", PO[i]);
//			}
//		}
//	}
//	
//	
//
//}