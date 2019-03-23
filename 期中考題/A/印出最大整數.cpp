#include <iostream>

using namespace std;
int main(){
    int n, max;
 	
 	cin >> n;
 	max=n;
 	
	while(cin >> n){
	 	if(n==0)
			break;
		if(max<n)
	 		max=n;
	}   
    cout << max;
}
