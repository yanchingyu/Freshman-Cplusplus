#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int n, sum=0;						//��J���Ӽƺ⥭�� 
    
    for(int i=1;i<=5;i++){
        cin >> n;
        
        sum += n;
    }
    cout << fixed << setprecision(2) << sum/5.0;
}
