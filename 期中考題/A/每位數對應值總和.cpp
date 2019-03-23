#include <iostream>

using namespace std;
int main(){
    int n, j=1, k, sum=0;
    
    cin >> n;
    
    for(int i=10;i<=1000000;i*=10){		//i用來算出n的餘數 
        k=n%i/j;				 		//mod完後，再來算出它的除數 
        switch(k){						// 每個位數對應的數字 
            case 0: k=99; break;
            case 1: k=88; break;
            case 2: k=77; break;
            case 3: k=66; break;
            case 4: k=55; break;
            case 5: k=44; break;
            case 6: k=33; break;
            case 7: k=22; break;
            case 8: k=11; break;
            case 9: k=0;  break;
        }
        sum += k;						//sum 算總和 
        j*=10;							 
    }
    cout << sum;
}
