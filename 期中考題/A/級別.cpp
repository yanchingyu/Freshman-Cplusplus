#include <iostream>

using namespace std;
int main(){
    int n;
    
    while(cin >> n){
        if(n<=100&&n>=90)
            cout << "A";
        else if(n<90&&n>=80)
            cout << "B";
        else if(n<80&&n>=70)
            cout << "C";
        else if(n<70&&n>=60)
            cout << "D";
        else if(n<60)
            cout << "F";
        else
            cout << "error";
    }
}
