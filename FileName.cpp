#include  <iostream>
using namespace std;
constexpr auto PI = 3.1416;
class cr
{
private:
	int x = 0, y = 0, r = 0;
public:
	void pr();
	void c(int& a, int& b, int& c);

};

int main()
{
	cr A;
	int x, y, r;
	A.pr();
	A.c(x, y, r);

}

void cr::pr()
{
	cout << "Ô²ÐÄ(x,y):";
	cin >> x >> y;
	cout << "°ë¾¶r£º";
	cin >> r;
}


void cr::c(int& a, int& b, int& c)
{
	cout << "Ô²ÐÄ£º(" << x << "," << y << ")" << "\t" << "°ë¾¶: " << r << endl;
}
