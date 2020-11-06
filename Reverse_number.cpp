// To print all prime number till N



#include <iostream>
//To print reverse number

using namespace std;
int main() {
    int n;
    cin>>n;
    for(; n!=0; n=n/10){
        cout<<n%10;
    }
    cout<<endl;
 return 0;
}
