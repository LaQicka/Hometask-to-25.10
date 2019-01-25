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
if(y>=x+9)rec(x,y-9,k);
if(check(y)==true)rec(x,sqrt(y),k);
if(y%7==0 && y/7>=x)rec(x,y/7,k);
if(y%10==1 && (y-1)/10>=x)rec(x,(y-1)/10,k);
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
