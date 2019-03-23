#include <iostream>

using namespace std;
int main(){
    int n, r1=1, Oct=0, sum=0;
    
    cin >> n;
    while(n>0){
        int r=1, k;
        int j=n%1000;
        
        for(int i=1;i<=3;i++){
            k=j%10;
            if(k==1)
                sum += r;
            
            r *= 2;
            j /= 10;
        }
        
        Oct += sum*r1;
        sum=0;
        
        r1 *=10;
        n /= 1000;
    }
    cout << Oct;
}
