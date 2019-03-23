#include <iostream>

using namespace std;
int main(){
    int n[7][7];
    
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i>2&&i<6&&j>2&&j<6&&n[i][j]!=n[4][4])
                cout << "-";
            else 
                cout << "*";
        }
        cout << endl;
    }
}
/*	*******
	*******
	**---**
	**-*-**
	**---**
	*******
	******* 	*/ 
