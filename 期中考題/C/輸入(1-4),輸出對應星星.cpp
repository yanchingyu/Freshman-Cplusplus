#include <iostream>

using namespace std;
int main(){
    int n;
    
    while(cin >> n){
        for(int i=1;i<=7;i++){
            for(int j=1;j<=7;j++){
                if(n==1&&i>=j||n==2&&i+j<=8||n==3&&i+j>=8||n==4&&i<=j)
                    cout << "*";
                else
                    cout << "-";
            }
            cout << endl;
        }
    }
}
