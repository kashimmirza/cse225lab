#include<bits/stdc++.h>
using namespace std;
 int fact(int n){

     if(n==0)
        return 1;
     else if(n==1)
        return 1;
     else
        return n*fact(n-1);
}
/*int div(int n){
   if(n==0){
    return 0;
   }
   else
    return div(n/10);
}*/
int sumof(int n){



    if(n==0){
        return 0;
        }
        else if(n>0){
              // n= n/10;
             return( n%10+sumof(n/10));


        }
    }



int main(){
    int n;
    cout<<"please enter the value";
    cin>>n;
   // cout<<"please enter the value";
    cout<<fact(n);
    cout<<"please enter the value";
    cin>>n;
    cout<<sumof(n);



}
