#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

int main()
{
    string a, b, sa, sb; 
	cin >> a >> b;
	int len = (a.size() * b.size()) / GCD(a.size(), b.size());

	for (int i = 0; i < len / a.size(); i++)
		sa += a;

	for (int i = 0; i < len / b.size(); i++)
		sb += b;

	if (sa == sb) cout << 1 << '\n';
	else cout << 0 << '\n';
}