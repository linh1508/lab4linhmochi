#include <iostream>
void nhap(int& n);
void xuat(int gt);
int tinh(int n);
using namespace std;
void main()
{
	int n;
	nhap(n);
	int gt = tinh(n);
	xuat(gt);
}
void nhap(int& n)
{
	cin >> n;
}
void xuat(int gt)
{
	if (gt == n)
		cout << n << "la so hoan hao ";
	cout << n << "khong phai so hoan hao ";
}
int tinh(int n)
{
	int gt;
	int i;
	for (i = 1; i < n; i++)
		if (n % i == 0)
			gt += i;

}