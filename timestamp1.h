#ifndef TIMESTAMP1_H
#define TIMESTAMP1_H


#include<string>
#include<iostream>
using namespace std;


class timestamp1
{
    public:
        timestamp1();
        timestamp1(string, string, string);
        bool operator ==(timestamp1);
        bool operator !=(timestamp1);
        bool operator>(timestamp1);
        bool operator<(timestamp1);
        friend istream& operator>>(istream&,timestamp1&);
        friend ostream& operator<<(ostream& , timestamp1&);



    private:
        string s,m,h;
};


#endif // TIMESTAMP1_H
