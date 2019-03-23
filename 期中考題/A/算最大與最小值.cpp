#include <iostream>

using namespace std;
int main(){
    int n, max, min;
    
    cin >> n;					//輸入五個數算最大與最小值 
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
