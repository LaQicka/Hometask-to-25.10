#include <iostream>
using namespace std;
void rec(int x,int y){
if(x+1==y)cout<<"+1";
else if(x+4==y)cout<<"+4";
else if(x+5==y)cout<<"+5";
else if(x*2==y)cout<<"*2";
else {
    if(y%2==0 && y/2<y-5 && y/2>=x){
            rec(x,y/2);
            cout<<"*2";
    }
    else if(y-5>=x){
        rec(x,y-5);
        cout<<"+5";
    }
    else if(y-4>=x){
        rec(x,y-4);
        cout<<"+4";
    }
    else {
        rec(x,y-1);
        cout<<"+1";
    }
}
}
int main()
{
    int x,y;
    cin>>x>>y;
    rec(x,y);
    return 0;
}
