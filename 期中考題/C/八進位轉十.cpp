#include <iostream>

using namespace std;
int main(){
    int n, r=1, Dec=0;
    
    cin >> n;
    while(n>0){
        int k=n%10;
        
        Dec += k*r;
        
        r *= 8;
        n /= 10;
    }
    cout << Dec;
}
