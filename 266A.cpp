#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n; 
	cin >> n;
	string s;
	cin >> s;
	int result = 0;
	for (int x=0; x<n; x++){
		if(s.length()==1){break;}
		if(s[x] == s[x+1]){
			result ++;
		}
	}
	cout << result;
}
