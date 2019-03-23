#include <iostream>

using namespace std;
int main(){
    int n, m, sum;
    
    cin >> n >> m;
    
    sum = n*m;
    while(m>0){
        int r=n%m;
        n=m;
        m=r;
    }
    cout << sum/n;
}
