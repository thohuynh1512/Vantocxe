/*
Giả sử một chiếc ô tô có vận tốc ban đầu v0, gia tốc a và thời gian t. 
Viết chương trình C++ để tìm vận tốc cuối cùng của ô tô và in kết quả ra màn hình.
*/

#include <iostream>
using namespace std;

int main()
{
	float v0, a;
	unsigned int t;
	cout << " Nhap gia tri v0, a, t: ";
	cin >> v0 >> a >> t;
	float v = v0 + a * t;
	cout << "Van toc cua xe = " << v << endl;		
}

