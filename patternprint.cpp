// To print a pattern in cpp like this:-
//       1
//      232
//     34543
//    4567654

// solution of above question
#include <iostream>
using namespace std;
int main() {
   int n,i,no;
   cin>>n;
   int row=1;
   while(row<=n){
       //print spaces n-row times --> 4-1=3
       i=1;
       while(i<=n-row){
           cout<<' ';
           i=i+1;
       }
       //print row times starting from row -->increasing number in pattern
       i=1;no=row;
       while(i<=row){
           cout<<no;
           no=no+1;
            i=i+1;
       }

       //print (row-1) times stating from 2*row-2 -->decreasing number in pattern
       i=1,no=2*row-2;
       while(i<=row-1){
           cout<<no;
           no=no-1;
            i=i+1;
       }
     row=row+1;
     cout<<endl;
   }
   cout<<endl;
   return 0;
}
