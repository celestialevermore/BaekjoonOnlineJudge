//#include<iostream>
//#include<vector>
//#define MAX 10000
//#include<queue>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//
//vector<int>N[MAX];
//bool visited[MAX];
//int p[MAX];
//
//int mini = 100000;
//int res = 0;
//int total = 0;
//
//int n;
//int R;
//
//int flag = 0;
//void DFS2(int start) {
//	
//	for (int i = 0; i < N[start].size(); i++) {
//		if (!visited[N[start][i]]) {
//			visited[N[start][i]] = true;
//			printf("DFS2(%d)\n\n",N[start][i]);
//			DFS2(N[start][i]);
//		}
//	}
//
//
//
//}
//
//
//void DFS1(int T, int Level,int start) {
//
//
//	//���� r,R����ŭ ������ �� ���
//	if (Level == R) {
//		printf("%d����ŭ ������ �Ǿ����ϴ�!! ���� Level : %d R : %d\n\n", R, Level, R);
//		//1���� ������ ��� Ȥ�� ��ü �������� �ϳ��� �� ������ŭ �� ���
//		printf("������� ");
//		for (int i = 1; i <= n; i++) {
//			if (visited[i]) { printf("%d �� ���� ", i); }
//		}
//		printf("�� �湮ó���� �Ǿ����ϴ�. �� �������� ���� ���ű� 1�Դϴ�. \n\n");
//		printf("���� ���ű�2�� �����մϴ�.\n\n");
//
//		
//		for (int i = 1; i <= n; i++) {
//
//			if (!visited[i]) {
//				printf("%d�� ��ŭ ��ȸ�� ������, ���� �湮���� ���� ���� %d�� �����մϴ�!!\n\n", R, i);
//				printf("%d �������� ���� �湮ó���� ���� �ʾҽ��ϴ�.�� ������������ ���ű� Ȯ���� ���� DFS2�� �����մϴ�.\n\n", i);
//				printf("start : DFS2(%d)\n\n", i);
//				//visited[i] = true;
//				DFS2(i);
//				for (int j = 1; j <= n; j++) {
//					if (!visited[j]) {
//						printf("������ %d �������� �湮ó���� ���� �ʾ����� Ȯ���Ͽ����ϴ�...\n\n", j);
//						flag = 1;
//						break;
//
//					}
//				}
//				if (flag == 1) {
//					for (int i = 1; i <= n; i++) {
//						visited[i] = false;
//					}
//					flag = 0;
//					return;
//				}
//			}
//				
//		}
//			/*for (int j = 1; j <= n; j++) {
//				if (!visited[j]) {
//					printf("������ %d �������� �湮ó���� ���� �ʾ����� Ȯ���Ͽ����ϴ�...\n\n", j);
//					flag = 1;
//					break;
//
//				}
//			}*/
//		if (flag == 0) {
//			printf("���ű�1�� ���ű� 2�� �� ���������ϴ�!!\n\n");
//			printf("��ü �α� : %d���� �� ����� ���ű�1�� �α� : %d�� ���� ����� �������ϴ�.\n\n", total, T);
//			res = total - T;
//			printf("���ű� 1�� �α� : %d ���ű� 2�� �α� : %d \n\n", T, res);
//			res = abs(T - res);
//			
//			mini = min(mini, res);
//			mini = abs(mini);
//			printf("������� ���ŵ� ��� : %d\n\n\n\n", mini);
//			for (int k = 1; k <= n; k++) { visited[k] = false; }
//			flag = 0;
//			return;
//		}
//		
//
//
//	}
//	else {
//		for (int i = 0; i < N[start].size(); i++) {
//			if (!visited[N[start][i]]) {
//				visited[N[start][i]] = true;
//				T += p[N[start][i]];
//				Level++;
//				printf("������ : %d // DFS1(%d,%d,%d)\n\n",N[start][i], T, Level,N[start][i]);
//				DFS1(T, Level,N[start][i]);
//				printf("DFS1(%d,%d,%d)����\n\n", T, Level, N[start][i]);
//				Level--;
//				T -= p[N[start][i]];
//				//visited[i] = false;
//			}
//		}
//	}
//
//
//
//
//}
//
//
//void comb(int n, int r) {
//	int tmp;
//	//0�� ���� ���
//	if (r == 0) { 
//		printf("��ü %d�� �� %d���� ���� ��쿡 �ش��մϴ�. \n\n", n, r);
//		printf("��� ������Ƿ� ��ü �α��� �ϳ��� ���ű��� �ش��մϴ�. \n\n");
//		return;
//	}
//	//��� ���� ���
//	if (r == n) { 
//		printf("��ü %d�� �� %d���� ���� ��쿡 �ش��մϴ�. \n\n", n, r);
//		printf("��� ������Ƿ� ���ű�1�� ���ű�2�� �������� �� �����ϴ�.\n\n");
//		return;
//	}
//
//	else {
//		//DFS2���� Level�ѵ� Ȯ���� ���� R�̶�� �������� ����
//		R = r;
//		printf("��ü %d�� �� %d���� ������ �ϰڽ��ϴ�. \n\n", n, R);
//		//���� 0, ���� 0
//		int Level = 0;
//		int T = 0;
//		int start = 0;
//		visited[0] = true;
//		//�־��� R����ŭ ���ű� Ȯ���� ���� DFS1�� �ϴ� ����. 
//		
//
//			DFS1(T, Level, start);
//			printf("<<<<<%d���� ���� ����!!>>>>>\n\n", R);
//			for (int i = 1; i <= n; i++) {
//				visited[i]=false;
//			}
//	}
//
//
//}
//
//
//
//
//
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int input;
//		cin >> input;
//		p[i] = input;
//		total += input;
//	}
//
//	/*for (int i = 1; i <= n; i++) {
//		printf("%d : %d \n", i, p[i]);
//	}*/
//	for (int i = 1; i <= n; i++) {
//		N[0].push_back(i);
//	}
//	for (int i = 1; i <= n; i++) {
//
//		int cnt;
//		cin >> cnt;
//		for (int j = 0; j < cnt; j++) {
//
//			int input;
//			cin >> input;
//			N[i].push_back(input);
//		}
//
//	}
//
//	for (int i = 0; i <= n; i++) {
//		printf("%d�� ������ ����� ���� : ", i);
//		for (int j = 0; j < N[i].size(); j++) {
//			printf("%d ���� ", N[i][j]);
//		}
//		printf("\n\n");
//	}
//
//
//
//
//	for (int r = 0; r <= n; r++) {
//		printf("<<<<< start : ��ü %d�� �� %d���� ������.>>>>>\n\n", n, r);
//		comb(n, r);
//	}
//
//
//	if (mini == 100000) {
//		printf("-1");
//	}
//	else {
//
//		printf("%d", mini);
//
//	}
//
//
//
//}