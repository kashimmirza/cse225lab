#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timestamp1.h"
#include "timestamp1.cpp"



using namespace std;

int main()
{
     SortedType<timestamp1>tss;
    timestamp1 tos;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tos;
        tss.InsertItem(tos);


    }
    tos=timestamp1("23","45","56");
    tss.DeleteItem(tos);
    for(int i=0;i<tss.LengthIs();i++){
        tss.GetNextItem(tos);
        cout<<tos<<endl;

    }
    return 0;
}


