#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    UnsortedType<int>t1;
    int n=0;
    int k;
    while(n<=5){
        cin>>k;
        t1.InsertItem(k);
        n++;


    }
    cout<<t1.LengthIs()<<endl;
}
