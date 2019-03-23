#include <iostream>

using namespace std;
int main(){
    int counter=0, sum=100;
    
    for(int i=1;i<=100;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)
                counter++;
            
        }
        if(counter%2==1)
            sum -= 1;
        counter=0;
    }
    cout << sum;
}
