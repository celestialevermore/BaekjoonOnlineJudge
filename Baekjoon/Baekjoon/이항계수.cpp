//#include<iostream>
//#include<stdio.h>
//
//using namespace std;
//int dy[21][21];
//
//int DFS(int n,int r) {
//	if (n == r || r == 0)return 1;
//	
//	//0���� ũ�ٴ� �Ҹ��� �̹� ��� ���� �� �ִٴ� �Ҹ��̴ϱ� 
//	//�״�� ������ ���ָ� �ȴ�.
//	if (dy[n][r] > 0)return dy[n][r];
//	// �����ϰ� �����Ѵ�.
//	else return dy[n][r]=DFS(n - 1, r - 1) + DFS(n-1, r);
//
//
//}
//int main() {
//	
//	int n,r;
//	cin >> n >> r;
//	printf("%d \n", DFS(n,r));
//	return 0;
//
//}