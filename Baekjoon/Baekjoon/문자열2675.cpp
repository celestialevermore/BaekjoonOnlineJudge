//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int testcasenumber;
//int index = 0;
//int repeat[1001];
//
//char map[1001][30];
//
//
//int main() {
//	/*scanf("%d", &s);
//
//	map = (char**)malloc(sizeof(int*) * s);
//	for (int i = 0; i < s; i++) {
//		map[i] = (char*)malloc(sizeof(char) * 30);
//	}
//
//
//	for (int i = 0; i < s; i++) {
//		scanf("%d %s",&repeat[i],map[i]);
//	}
//	
//
//
//	for (int i = 0; i < s; i++) {
//		int repeatsize = repeat[i];
//		for (int j = 0; j < sizeof(map[i]); j++) {
//			char currentchar = map[i][j];
//			for (int k = 0; k < repeatsize; k++) {
//				printf("%c", currentchar);
//			}
//			
//		}
//		printf("\n");
//	}*/
//
//	scanf("%d", &testcasenumber); //�׽�Ʈ ���̽��� ������ �޴´�.
//
//
//	for (int i = 0; i < testcasenumber; i++) {
//		
//		scanf("%d %s", &repeat[i], map[i]); //3�� ���� �� ������ map[0]���� �ִ´�
//		
//	}
//	
//	for (int i = 0; i < testcasenumber; i++) {
//		int repeatsize = repeat[i]; //�ش� ���ڿ��� �ݺ� Ƚ���� �����´�. 
//		for (int j = 0; map[i][j] != '\0'; j++) {
//			char currentchar = map[i][j];
//			for (int k = 0; k < repeatsize; k++) {
//				printf("%c", currentchar);
//			}
//		}
//		printf("\n");
//
//
//	}
//	
//
//
//
//
//
//
//
//
//
//
//
//}