#include <iostream>

using namespace std;
int main(){
    int n;
    
    cin >> n;		//��J�@5��ƧP�_�O�_���j��
    
    if(n/10000==n%10&&n/10%10==n/1000%10)
        cout << "yes";
    else
        cout << "no";
	
}
