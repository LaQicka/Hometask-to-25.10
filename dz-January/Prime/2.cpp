#include <iostream>

using namespace std;
void rec(int x, int y, int z, int& k){
if(x==y)k++;
else{
    if(x<=y && x+1!=z)rec(x+1,y,z,k);
    if(x<=y && x*2!=z)rec(x*2,y,z,k);
    if(x<=y && (x*2)+1!=z)rec((x*2)+1,y,z,k);
    if(x<=y && x*10!=z)rec(10*x,y,z,k);
}
}
int main()
{
    int x,y,z,k=0;
    cin>>x>>y>>z;
    rec(x,y,z,k);
    cout<<k;
    return 0;
}
