#include <iostream>
using namespace std;

int main(){
    bool rooms[100];
    int rooms_index;
    int answer = 0;
    cin >> rooms_index;

    for(int x=0; x< rooms_index; ++x){
        cin >> rooms[x];
    }

    for(int x=1; x<rooms_index; ++x){
        if(rooms[x] == 0){
            if(rooms[x+1] == 1 && rooms[x-1] == 1){
                rooms[x+1] = 0;
                ++answer;
            }
        }
    }
    cout << answer;
}