#include <iostream>
#include <algorithm>
 
 using namespace std;
 
int main(){
	int n=0;
	cin>>n;
	int m=0;
	cin>>m;
	
	if(n%2==0){
		if(m<=n/2){
			cout << m*2-1;
		}
		if(m>n/2){
			int k = m - n/2;
			cout << k*2;
		}
	}
	
	if(n%2!=0){
			if(m<=n/2+1){
			cout << m*2-1;
		}
		if(m>n/2+1){
			int k = m - n/2-1;
			cout << k*2;
		}
	}
}