#include <iostream>

using namespace std;
int main(){
    int n;
    
    cin >> n;
    
    if(n>0&&n<=3000)
        if(n%4==0&&n%100!=0||n%400==0)
            cout << "YES";
        else 
            cout << "NO";
    
    
    
}
