#include <iostream>

using namespace std;
int main(){
    int n, r=1, sum=0;
    
    cin >> n;		
    
    for(int i=10000000;i>0;i/=10){
        int k=(n/i%10);
        
        if(k==0){
            r*=-1;
            continue;
        }
        sum += (10-k)*r;
        
    }
    cout << sum;
}
/*輸入一8位數整數，並對應以下表格換算該數值並加總，如遇到0則所有數乘以(-1)後運算

表:
1 | +9
2 | +8
3 | +7
4 | +6
5 | +5
6 | +4
7 | +3
8 | +2
9 | +1 


