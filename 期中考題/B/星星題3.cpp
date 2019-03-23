#include <iostream>

using namespace std;
int main(){
    
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i+j==3||i+j==13||i-j==5||i-j==-5||(i==2||i==6)&&(j==2||j==6))
                cout << "-";
            else
                cout << "*";
        }
        cout << endl;
    }
}
/*	*-***-*
	--***--
	*******
	*******
	*******
	--***--
	*-***-*    */ 
