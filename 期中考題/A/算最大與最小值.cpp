#include <iostream>

using namespace std;
int main(){
    int n, max, min;
    
    cin >> n;					//��J���Ӽƺ�̤j�P�̤p�� 
    max=min=n;
    
    for(int i=1;i<=4;i++){
        cin >> n;
        
        if(max<n)
            max=n;
        else if(min>n)
            min=n;
    }
    cout << max << " " << min;
}
