//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int N;
//int res = -1000;
//vector<int> T, P;
//
//void DFS(int L, int sum) {
//	ios_base::sync_with_stdio(false);
//	if (L == N + 1) {
//		if (sum > res)res = sum;
//	}
//	else {
//		if (L + T[L] <= N + 1)DFS(L + T[L], sum + P[L]); //����� �Ѵ�.
//		DFS(L + 1, sum); //����� ���Ѵ�. 
//	}
//}