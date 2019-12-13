#include<bits/stdc++.h>
using  namespace std;
int findmin(int a[],int size){
    if(size ==0){
        return a[0];
    }
      else
       return  min(a[0],findmin(a,size-1));


}
int main(){
 int n;

 int a[]={1,3,4,5};
 cout<<findmin(a,4);



}
