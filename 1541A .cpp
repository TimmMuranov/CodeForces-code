#include <iostream>
using namespace std;
int main(){
    int a = 0;
    cin >> a;
    for (int x=0; x<a; ++x){
        int cats = 0;
        cin >> cats;
        int w = 1;
        if (cats%2){
            cout<<2<<" "<<3<<" "<<1<<" ";
            w = 4;
        }
        while(w!=cats){
            int w1 = w + 1;
            cout<<w1<<" "<<w<<" ";
            ++w;
        }
        cout<<"\n";
    }
}
// 1 2 3 4 5 6 7 8 9 10 -> 2 1 4 3 6 5 8 7 10 9
// 1 2 3 4 5 6 7 8 9 -> 2 3 1 5 4 7 6 9 8
