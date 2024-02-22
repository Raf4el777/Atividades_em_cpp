#include <iostream>
 
using namespace std;
 
int main() {
 
    int num1 =1, num2 = 1;
    int n;
    cin>> n;
    cout<<"0 1";
    for(int i = 2; i < n; i++){
        cout<<" "<<num2;
        int fibonacci = num1;
        num1 = num2;
        num2 = num1 + fibonacci;
    }
    cout<<endl;
    return 0;
}
