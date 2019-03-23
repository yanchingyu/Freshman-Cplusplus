#include <iostream>

using namespace std;
int main(){
    int n, r=1, Dec=0;
    
    cin >> n;
    while(n>0){
        int k=n%10;
        
        if(k==1){
            Dec += r;
        }
        
		r *= 2;
        n /= 10;
    }
    cout << Dec;
}
