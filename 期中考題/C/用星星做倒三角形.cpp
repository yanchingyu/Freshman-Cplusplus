#include <iostream>

using namespace std;
int main(){
    int n;
    
    while(cin >> n){
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n*2-1;j++){
                if(j>=i&&i+j<=2*n)
                    cout << "*";
                if(i>j)
                    cout << "-";
            }
            cout << endl;
        }
    }
}
