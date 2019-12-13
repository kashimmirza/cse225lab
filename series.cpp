#include<bits/stdc++.h>
using namespace std;
double series(int n){
     if(n==0){
        return 1;

     }
     else
     {

         return (1/pow(2,n)+series(n-1));
     }




}
int main(){
 int n;
 cin>>n;
 cout<<series(n)<<endl;





}
