//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef struct Loc {
//	int x, y, z;
//
//	Loc(int a, int b, int c) {
//		x = a;
//		y = b;
//		z = c;
//	}
//	//������ �ٲ� �� ����
//	bool operator<(const Loc& b)const {
//		//return x < b.x;
//		//x�� �Լ��� ȣ���� ��ü�� x
//		// b.x�� ���� ������ b�� x 
//		//�տ����� �۰� �ڿ��� ũ�� �������� ���� 
//
//
//		if (x != b.x)return x < b.x;
//		if (y != b.y)return y < b.y;
//		if (z != b.z)return z < b.z;
//	}
//};
//
//
//int main() {
//	
//	vector<Loc> XY;
//	XY.push_back(Loc(2, 3, 5));
//	XY.push_back(Loc(3,6,7));
//	XY.push_back(Loc(2,3,1));
//	XY.push_back(Loc(5,2,3));
//	XY.push_back(Loc(3,1,6));
//	
//	sort(XY.begin(), XY.end());
//
//
//	for (auto pos : XY) cout << pos.x << " " << pos.y << " " << pos.z << endl;
//
//
//
//	
//
//
//}