//#include<stdio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define MAX 101
//using namespace std;
//
//
//int n;
//int start, target, cnt;
//bool visited[MAX];
//vector<int>relative[MAX];
//queue<int>Q;
//int flag = 0;
//
//int ans = 0;
//void DFS(int start, int relativecnt) {
//	if (start == target) {
//		flag = 1;
//		printf("%d���� %d���� �����Ͽ����ϴ�!! ��� Ž���� �����մϴ�. \n\n", start, target);
//		printf("����� : %d\n\n", relativecnt);
//		ans = relativecnt;
//		return;
//	}
//	else {
//		printf("<<<%d���� DFS Ž���� �����մϴ�!!!>>> \n\n", start);
//		for (int i = 0; i < relative[start].size(); i++) {
//			if (!visited[relative[start][i]]) {
//				printf("%d�� ���� �湮���� �ʾҰ�, %d�� ����Ǿ� �ֽ��ϴ�.\n\n", relative[start][i], start);
//				visited[relative[start][i]] = true;
//				relativecnt++;
//				printf("��������� �̼� ��� ��� : %d\n\n", relativecnt);
//				int next = relative[start][i];
//				printf("%d���� ���ο� DFS Ž���� �����մϴ�. \n\n", next);
//				
//				DFS(next, relativecnt);
//			}
//		}
//
//
//	}
//
//
//
//}
//
//
//int main() {
//
//	cin >> n; //n�� ��ü�α�
//	
//	cin >> start >> target;
//
//	cin >> cnt;
//
//
//	for (int i = 0; i < cnt; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//		relative[snode].push_back(tnode);
//		relative[tnode].push_back(snode);
//	}
//
//	Q.push(start);
//	visited[start] = true;
//	int relativecnt = 0;
//	DFS(start,relativecnt);
//
//
//	if (flag == 1) {
//		printf("%d ", ans);
//	}
//	else {
//		printf("-1");
//	}
//
//
//
//}