//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#define _CRT_SECURE_NO_WARNINGS
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	
//	int N; //���°� ����
//	int C; // �� ���� ��
//	int input[200001] = { 0, };
//	scanf("%d %d", &N, &C);
//
//	//C��ŭ �迭 ���� 1�� ǥ�ϰ� �� ��
//
//	int magutgan[20001] = { 0, };
//	int start = 0;
//	int end = 0;
//	//input�ȿ� 1,2,8,4,9
//	//�ִ밡 �ǵ��� �ϸ� �Ǵ� �Ŵϱ� 
//	//���� ���� �� ��ġ�� ���� Ŭ �� ��ġ�� �ϴ� ���Ѵ�. 
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &input[i]);
//	}
//
//	for (int i = 0; i < 201; i++) {
//		if (input[i] != 0) 
//		{
//			magutgan[input[i]]++;
//		}
//	}
//	printf("\n");
//	
//	for (int i = 0; i < 201; i++) {
//		if (magutgan[i] != 0) {
//			start = i;
//			break;
//		}
//	}
//	for (int i = 201; i > 0; i--) {
//		if (magutgan[i] != 0) {
//			end = i; break;
//		}
//		
//	}
//	//start�� end�� ���� ���������� ���Ͽ���. 
//	//���� ����� �� ���� �ִ� �Ÿ�
//	int distance=0;
//	int maxdistance = 0;
//
//	//�� ���� �־����� ���� �� ���̰� �ִ밡 �ǵ��� �մϴ�. 
//	if (C == 2) {
//		maxdistance = end - start; printf("%d", maxdistance);
//	}
//	else {
//	
//		sort(input, input + N);
//
//		for (int i = 1; i < N - 1; i++) {
//			
//			if (input[i] - start > end - input[i]) {
//				distance = input[i] - start;
//				if (distance > maxdistance) { maxdistance = distance; }
//			}
//			if (input[i] - start <= end - input[i]) {
//				distance = end - input[i];
//				if (distance > maxdistance) { maxdistance = distance; }
//			}
//		}
//	}
//	printf("\n");
//
//
//	printf("%d", maxdistance);
//
//}