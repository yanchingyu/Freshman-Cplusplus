#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    
    for(int j=1;j<=9;j++){
        for(int i=2;i<=5;i++){
            cout  << i << "*" << j << "=" << setw(2) << i*j << " ";
        }
        cout << endl;
    }
}
