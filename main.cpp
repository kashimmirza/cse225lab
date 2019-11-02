#include <iostream>
#include "stacktype.h"
#include "stackType.cpp"

using namespace std;

int main()

{
    StackType<int>t;
    if(t.IsEmpty()==true){
        cout<<"Empty"<<endl;

    }
    else{
        cout<<"Full"<<endl;

    }
    int k;

    for(int i=0;i<MAX_ITEMS-1;i++){
            cin>>k;
        t.Push(k);

    }
    if(t.IsEmpty()==true){
        cout<<"empty"<<endl;

    }
    else
        cout<<"not empty"<<endl;
    if(t.IsFull()==true){
        cout<<"Full"<<endl;

    }
    else{

        cout<<"NOtfull"<<endl;
    }
    StackType<int>t2;
    cout<<t.Top()<<endl;
    for(int i=0;i<4;i++){
    t2.Push(t.Top());
    t.Pop();
}
int i=5;
while(i--){

t.Push(t2.Top());
cout<<t.Top()<<" ";

 t2.Pop();
i++;
if(i==4){
    t.Push(7);
}
}

/*for(int i=0;i<4;i++){
    t3.Push(t2.Top());
    cout<<t3.Top()<<" ";

    //cout<<t2.Top()<<" ";
    //t2.Pop();
}*/

t.Push(7);
if(t.IsFull()==true){
    cout<<"stackisfull"<<endl;
}

/*for(int i=0;i<4;i++){
    cout<<t3.Top();
     t3.Pop();

}*/


    return 0;
}
