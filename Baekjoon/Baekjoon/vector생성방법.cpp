//#include<stdio.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//
//int main() {
//
//
//	vector<int> a(3); //���� int�� a
//	
//	a[1] = 5; //���Ϳ��� �̷��� �ȵ� �ε��� ������ ���. 
//	
//	
//	cout << a[1] << endl;
//
//
//
//	vector<int> c[3]; //c��� �̸��� ���� ���Ͱ� ���� ����
//	//���� 2ġ�� �迭�� �ּҴ���???
//
//	c[0].push_back(1);
//	c[0].push_back(2);
//	c[0].push_back(3);
//
//	c[1].push_back(4);
//	c[1].push_back(5);
//	c[1].push_back(6);
//
//	c[2].push_back(7);
//	c[2].push_back(8);
//	c[2].push_back(9);
//
//
//
//	cout << c[0][2] << endl; // 3���
//
//	cout << c[2][2] << endl; // 9��� 
//
//
//
//
//
//
//	vector<pair<int, int> > g[3];
//
//	g[1].push_back({ 3,5 });
//	g[1].push_back({ 4,7 });
//	g[1].push_back({ 5,9 });
//	g[2].push_back(make_pair(7, 7));
//
//
//	cout << g[2][0].first << " " << g[2][0].second << endl;
//
//
//
//
//
//
//
//}