#include <iostream>
#include <algorithm>
using namespace std;
#define cap 10
//!enqueue time O(1)   space O(1)
class q{
    int queue[cap];
    int f;
    int r;
    public:
    q(){
        f=-1;
        r=-1;
    }
    void enqueue(int val){
        
        if(r==cap-1)
        cout<<"overflow!!!";

        queue[r++]=val;
        cout<<val<<"inserted"<<endl;
    }

};
int main(){
    q q1;
    q1.enqueue(2);
    q1.enqueue(2);
    q1.enqueue(2);
    q1.enqueue(2);
    q1.enqueue(2);
    q1.enqueue(2);

}