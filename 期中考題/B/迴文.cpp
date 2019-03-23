#include <iostream>

using namespace std;
int main(){
    int n;
    
    cin >> n;		//輸入一5位數判斷是否為迴文
    
    if(n/10000==n%10&&n/10%10==n/1000%10)
        cout << "yes";
    else
        cout << "no";
	
}
