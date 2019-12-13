#include<bits/stdc++.h>
using namespace std;

int fiv(int n){
    if(n==0)
        return n;
    if(n==1)
        return n;
    else
       return fiv(n-1)+fiv(n-2);

}
int main(){

  int n;
  cin>>n;
 cout<< fiv(n)<<endl;



}
