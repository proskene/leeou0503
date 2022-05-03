#include <iostream>

namespace NameSpace1 {int a = 10;}
namespace NameSpace2 { int a = 20;}
int a = 30;
namespace NameSpace1 { int b = 50; }

using namespace std;

int main()
{
	int a = 40;
	cout << NameSpace1::a << endl; /* 함수 밖에 있는 명칭공간 a */
	cout << NameSpace2::a << endl;
	cout << ::a << endl;
	cout << a << endl;
	cout << NameSpace1::b << endl;
	return 0;
}
