#include "timestamp1.h"

#include<string>
#include<iostream>
using namespace std;

timestamp1::timestamp1()
{
    //ctor
}

timestamp1::timestamp1(string s, string m, string h)
{ this->s=s;
  this->m=m;
  this->h=h;
    //dtor
}
bool timestamp1::operator == (timestamp1 tt){
//bool timeStamp::operator==(timeStamp&tt){
  if(tt.s==s&&tt.m==m&&tt.h==h)
    return true;
  else
    return false;


}
bool timestamp1::operator!=(timestamp1 tt){
  if(tt.s!=s && tt.m!=m &&tt.h!=h)
    return true;
  else
    return false;
}
bool timestamp1::operator>(timestamp1 tt){
  if(tt.s>s&&tt.m>m&&tt.h>h)
    return true;
  else
    return false;
}
bool timestamp1::operator<(timestamp1 tt){
  if(tt.s<s&&tt.m<m&&tt.h<h)
    return true;
  else
    return false;
}
istream& operator>>(istream&is,timestamp1& kas){
   is>>kas.s>>kas.m>>kas.h;
   return is;

}
ostream& operator<<(ostream& os,timestamp1& kas){
  os<<kas.s<<kas.m<<kas.h;
  return os;
}

