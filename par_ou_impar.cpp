#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, x;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%2 == 0 && x != 0  ){
            cout<<"EVEN ";
            if (x > 0 ){
            cout<<"POSITIVE\n";
           
            } else{
                cout<<"NEGATIVE\n";
            }
        }else if(x == 0){
            cout<<"NULL\n";
        }else {
            cout<<"ODD ";
            if (x > 0 ){
            cout<<"POSITIVE\n";
           
            } else{
                cout<<"NEGATIVE\n";
            }
        } 

        
    }
    return 0;
}