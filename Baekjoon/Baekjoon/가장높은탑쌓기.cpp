//#include<stdio.h>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef struct block {
//	int space;
//	int height;
//	int weight;
//}Block;
//
//int dy[101];
//Block blocklist[101];
//
//
//int n;
//int main() {
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		int s, h, w;
//		cin >> s >> h >> w;
//		blocklist[i].space = s;
//		blocklist[i].height = h;
//		blocklist[i].weight = w;
//	}
//
//
//	int ans = 0;
//	dy[1] = blocklist[1].height;
//	
//	for (int i = 2; i <= n; i++) {
//		int max = 0;
//		//printf("\n\n<<���� ������ ���� ���� : %d %d %d >>\n\n", blocklist[i].space, blocklist[i].height, blocklist[i].weight);
//		for (int j = i - 1; j > 0; j--) {
//
//			if (blocklist[j].space > blocklist[i].space && blocklist[j].weight > blocklist[i].weight && max < dy[j]) {
//				//printf("���� �� %d > %d \n\n", blocklist[j].space, blocklist[i].space);
//				//printf("���� �� %d > %d \n\n", blocklist[j].weight, blocklist[i].weight);
//				
//				max = dy[j];
//				//printf("���� max�� : %d\n\n\n", max);
//			}
//		}
//		max = max + blocklist[i].height;
//		/*printf("���� ���� �� �ִ� ���� ���� :%d\n\n", blocklist[i].height);
//		printf("���� ���ŵ� max�� : %d\n\n", max);*/
//		dy[i] = max;
//		//�̰� �����డ���� ��� �ȵȰ���. 
//		if (max > ans) {
//			ans = max;
//		}
//	}
//
//	cout << ans;
//
//}
