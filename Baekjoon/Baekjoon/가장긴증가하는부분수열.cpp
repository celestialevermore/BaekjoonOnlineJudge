//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//int index = 2;
//
//pair<int, int> arr[1001];
//
//int main() {
//
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++) {
//		scanf("%d", &arr[i].first);
//	}
//	//20 30 50 100 10 70 100 10 80 �Է�
//	//0  0  0  0   0  0  0   0  0  �� ����
//	arr[1].second = 1;
//	//20 30 50 100 10 70 100 10 80 �Է�
//	//1  0  0  0   0  0  0   0  0  �� ����
//
//	for (index; index <= n; index++) {
//		int uptocurrent_min = 10000;
//		int uptocurrent_max = -10000;
//		int atthatindex_ofMax = 0;
//		int atthatindex_ofMin = 0;
//		//ó������ ���� index �ٷ� ������ ���Ͽ� �ְ��ڿ� �ְ����� �ε����� ������.
//		for (int i = 1; i < index; i++) {
//			if (uptocurrent_max < arr[i].first) { uptocurrent_max = arr[i].first; atthatindex_ofMax = i; }
//		}
//		//
//		for (int i = 1; i < index; i++) {
//			if (uptocurrent_min > arr[i].first) {
//				uptocurrent_min = arr[i].first;
//				atthatindex_ofMin = i;
//			}
//		}
//		//���� ���� �ҽָ��� �� 
//		if (uptocurrent_min > arr[index].first) { arr[index].first = 1; }
//
//		//���ο� �ְ��ڰ� ��Ÿ���� �� 
//		if (uptocurrent_max < arr[index].first) {
//			int indexformax = 0;
//			int maxofeach[1001];
//			for (int i = 1; i < index; i++) {
//				if (arr[index].first > arr[i].first) {
//					maxofeach[indexformax++] = arr[i].second + 1;
//				}
//			}
//			int maxmax = 0;
//			for (int i = 0; i < indexformax; i++) {
//				if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//			}
//			arr[index].second = maxmax;
//		}
//		//100�� 70 ������ �� Ȥ�� 100�� 100 ������ ���� ��
//		//�׷��ϱ� ���ο� �����ڰ� ��Ÿ������ ������ �ְ��ڰ� ������ �� 
//		else if (uptocurrent_max > arr[index].first) {
//			int indexformax = 0;
//			int maxofeach[1001];
//			for (int i = 1; i < index; i++) {
//				if (arr[index].first > arr[i].first) {
//					maxofeach[indexformax++] = arr[i].second + 1;
//				}
//			}
//			int maxmax = 0;
//			for (int i = 0; i < indexformax; i++) {
//				if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//			}
//			arr[index].second = maxmax;
//		}
//		//������ == �ְ���
//		else {
//			int indexformax = 0;
//			int maxofeach[1001];
//			for (int i = 1; i < index; i++) {
//				if (arr[index].first > arr[i].first) {
//					maxofeach[indexformax++] = arr[i].second + 1;
//				}
//			}
//			int maxmax = 0;
//			for (int i = 0; i < indexformax; i++) {
//				if (maxmax < maxofeach[i]) { maxmax = maxofeach[i]; }
//			}
//			arr[index].second = maxmax;
//		}
//	}
//
//	int max = -1000;
//	for (int i = 1; i <= n; i++) {
//		if (max < arr[i].second) {
//			max = arr[i].second;
//		}
//	}
//	printf("%d ", max);
//
//}