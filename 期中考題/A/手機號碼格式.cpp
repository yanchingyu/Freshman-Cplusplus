#include <iostream>

using namespace std;
int main(){
    int n, a, b, c;
    
    cin >> n;
    
    a=n/1000000;
    b=n/1000%1000;
    c=n%1000;
    
    cout << "0" << a << "-" << b << "-" << c; 
    
}
