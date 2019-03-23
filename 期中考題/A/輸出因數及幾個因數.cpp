#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n, j=0, k;
    
    cin >> n;
    if(n<pow(10,9)){
        for(int i=1;i<=n;i*=10){
            k=n/i%10;
            j++;
        }
        cout << j;
    }
}
