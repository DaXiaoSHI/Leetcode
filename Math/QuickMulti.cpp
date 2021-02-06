#include <iostream>
using namespace std;

int QuickMulti (int A, int B){
    int res=0;
    for(; B; B>>=1,A<<=1){
        if( B&1 ) {
            res += A;
        }
    }
    return res;
}

int main(){
    cout<<QuickMulti(8,9)<<endl;
}