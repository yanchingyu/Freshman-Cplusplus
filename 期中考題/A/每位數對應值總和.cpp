#include <iostream>

using namespace std;
int main(){
    int n, j=1, k, sum=0;
    
    cin >> n;
    
    for(int i=10;i<=1000000;i*=10){		//i�ΨӺ�Xn���l�� 
        k=n%i/j;				 		//mod����A�A�Ӻ�X�������� 
        switch(k){						// �C�Ӧ�ƹ������Ʀr 
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
        sum += k;						//sum ���`�M 
        j*=10;							 
    }
    cout << sum;
}
