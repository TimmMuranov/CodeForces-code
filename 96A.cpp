#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int size = s.length();
	bool result = 0;
	
	int n0=0;
	int n1=0;
	
	for (int x=0; x<size; x++){
		
		if(s[x] == '0'){
			n0++;
			n1=0;
		}
		if(s[x] == '1'){
			n1++;
			n0=0;
		}
		if(n0 >= 7 || n1 >= 7){
			result = 1;
		}
	}
	if(result == 1){
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}