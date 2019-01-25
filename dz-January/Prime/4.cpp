#include <iostream>
#include <cmath>
using namespace std;
bool check(int a){
double f=a;
if(sqrt(f)==sqrt(a))return true;
else return false;
}
void rec(int x,int y,int& k){
if(x==y){
    k++;
}else{
if(y>=x+5)rec(x,y-5,k);
if(check(y)==true)rec(x,sqrt(y),k);
if(y%3==0 && y/3>=x)rec(x,y/3,k);
if(y%10==2 && (y-2)/10>=x)rec(x,(y-2)/10,k);
}
}
int main()
{
    int x,y,k=0;
    cin>>x>>y;
    rec(x,y,k);
    if(k>0)cout<<"YES";
    else cout<<"NO";
    return 0;
}
