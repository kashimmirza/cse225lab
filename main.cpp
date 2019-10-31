#include <iostream>
#include "SortedType.h"
#include "SortedType.cpp"

using namespace std;

int main()
{
    SortedType<int>t;
    cout<<t.LengthIs();
    int k;
    for(int i=0;i<MAX_ITEMS;i++){
        cin>>k;
        t.InsertItem(k);


    }
    t.print();
    cout<<endl;
    int m;
    cout<<"enter a value to retrieve "<<endl;
    cin>>m;
    bool q=true;
    t.RetrieveItem(m,q);
    if(t.IsFull()==true)
    cout<<"Full"<<endl;
    else
        cout<<"notFull"<<endl;
        int o;
        cout<<"enter a value to delete"<<endl;
        cin>>o;


        t.DeleteItem(o);

        cout<<"after deleting item"<<endl;
        t.print();
        cout<<"after deleting checking whether the list is full or not"<<endl;
        if(t.IsFull()==true){
            cout<<"Full"<<endl;

        }
        else
            cout<<"Not full"<<endl;
    return 0;
}
