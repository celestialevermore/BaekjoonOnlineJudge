//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//queue<int> map;
//vector<int> Q[10001];
//int check[10001];
//int PathCost[10001];
//int count = 0;
//int movement[3] = { 1,-1,5 };
//
//int main() {
//	int S, E;
//
//	scanf("%d %d", &S, &E);
//	
//	
//	
//	
//	check[S] = 1; //�ߺ� ����� ���ϱ� ����. �湮 ǥ�ø� ���ش�. 
//	PathCost[S] = 0;
//	map.push(S);
//
//	while (!map.empty()) {
//		int current = map.front(); //���� 5�̴�. 
//		//current�� ����Ǿ� �ִ� �͵��� ��� ã���ش�.
//		map.pop();
//		for (int i = 0; i < 3; i++) {
//			int result = current + movement[i];
//			map.push(result);
//			if (result <= 0 || result > 10000) { continue; }
//			if (result == E) { printf("%d ", PathCost[result]); exit(0); }
//			if (check[result] == 0) {
//				check[result]=1;
//				PathCost[result] = PathCost[current] + check[result];
//				map.push(result);
//			}
//			else {
//				continue;
//			}
//			
//			
//		}
//	}
//
//}
