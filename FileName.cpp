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
	cout << "Բ��(x,y):";
	cin >> x >> y;
	cout << "�뾶r��";
	cin >> r;
}


void cr::c(int& a, int& b, int& c)
{
	cout << "Բ�ģ�(" << x << "," << y << ")" << "\t" << "�뾶: " << r << endl;
}
