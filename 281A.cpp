#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	char in = str[0];
	if (in > 96 && in < 123 ){
		in = in - 32;
	}
	str.erase(0, 1);
	cout << in << str;
}