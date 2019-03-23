#include <iostream>

using namespace std;
int main(){
    int counter=2;
    double pi=0;
    
    cout << "4 ";
    for(int i=3;i<=99;i+=2){
        if(i>=3&&counter%2==0)
            cout << " -4/" << i;
        else
            cout << " +4/" << i;
        
        if(counter%10==0)
            cout << endl;
        
        if(counter%2==1)
            pi += 4.0/i;
        else
            pi -= 4.0/i;
        
        counter++;
    }
    cout << "=" << 4+pi;
}
