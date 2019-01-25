#include <iostream>
using namespace std;
void rec(int x, int y, int &k)
{
if(x==y) k++;
else
{
if(x<=y) rec(x+1, y, k);
if(x<=y) rec(x*2, y, k);
if(x<=y) rec(x*3, y, k);
}
}
int main()
{
int x, y, k=0;
cin>>x>>y;
rec(x, y, k);
cout<<k;
return 0;
}
