#include <iostream>
#include <algorithm>
 
 using namespace std;
 
int main()
{
    int p;
    cin>> p;
    
    int arr[p];
    for(int x=0; x<p; x++){
    	cin>>arr[x];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
 
    sort(arr, arr + n);
 
 int sum = 0;
 for(int x=0; x<p; x++){
 	sum+=arr[x];
 }
 
 int sum2 = 0;
 int result = 0;
 for (int x=0; x<p; x++){
 	if(sum2 > sum/2){break;}
 	sum2+= arr[x];
 	result++;
 }
  cout << result;
    return 0;
}