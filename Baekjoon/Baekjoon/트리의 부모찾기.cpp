//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#define MAX 100001
//using namespace std;
//
//int N;
//vector<int>tree[MAX];
//int check[MAX];
//
//void DFS(int current,int parent) {
//
//	for (int i = 0; i < tree[current].size(); i++) {
//		if (check[tree[current][i]] == 0) {
//			//printf("���� check[%d]==0�Դϴ�.\n\n", tree[current][i]);
//			//check[4]==0�� ��� 
//			check[tree[current][i]] = current;
//			//printf("check[%d]�� %d�� �Ҵ��մϴ�. \n\n", tree[current][i], current);
//			//check[4]=1;
//			int next = tree[current][i];
//			//printf("���� DFS�� �� �� : %d \n\n", next);
//			//next=4�� �ְ�
//			//printf("DFS(%d,%d) \n\n", next, current);
//			DFS(next, current);
//		}
//		else { continue; }
//	}
//
//}
//
//
//int main() {
//
//	cin >> N;
//
//
//	for (int i = 0; i < N-1; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		tree[snode].push_back(tnode);
//		tree[tnode].push_back(snode);
//	}
//	check[1] = 1;
//	int current = 1;
//	int parent = 1;
//	DFS(current,parent);
//
//
//	for (int i = 2; i <= N; i++) {
//		printf("%d\n", check[i]);
//	}
//
//
//
//}