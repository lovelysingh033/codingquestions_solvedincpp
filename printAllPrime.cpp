// To print all prime number till N



#include <iostream>
using namespace std;
int main() {
    
        int i,no,N;
        cin>>N;
        no=2;
        while(no<=N){
          i=2;
          while(i<=no){
              if(no%i==0){
                  break;
              }
              i=i+1;
          }
        if(i==no){
            cout<<no<<' ';
        }
        no=no+1;
        }
 cout<<endl;
   return 0;
}
