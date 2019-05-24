/*
Giả sử một chiếc ô tô có vận tốc ban đầu v0, gia tốc a và thời gian t. 
Viết chương trình C++ để tìm vận tốc cuối cùng của ô tô và in kết quả ra màn hình.
*/

#include <iostream>
using namespace std;

int main()
{
	float v0, a;// van toc ban dau va gia toc
	unsigned int t;//thoi gian xe chay
	cout << " Nhap gia tri van toc ban dau v0 = ";
	cin >> v0;
	cout << " Nhap gia tri gia toc a = ";
	cin >> a;
	cout << " Nhap thoi gian t = ";
	cin >> t;
	float v = v0 + a * t;//van toc cua xe
	cout << "Van toc cua xe = " << v << endl;		
}

