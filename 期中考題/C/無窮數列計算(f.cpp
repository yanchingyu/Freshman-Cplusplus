#include <iostream>

using namespace std;
int main(){
    int counter=1;
    double f=0;
    
    cout << "1";
    for(int i=1;i<=49;i++){
        cout << " +" << i << "/" << i+1;
        
        f += i*1.0/(i+1);
        
        counter++;
        
        if(counter%10==0)
            cout << endl;
    }
    cout << " =" << 1+f;
}
