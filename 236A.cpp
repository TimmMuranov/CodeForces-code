#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int size = str.length();
	if(size%2 == 0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
}