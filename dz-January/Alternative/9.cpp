#include <iostream>
#include <vector>
using namespace std;

int main()
{
int n;
cin>>n;
vector <int> ar(n);
for(int i=0;i<n;i++){
    cin>>ar[i];
}
int maxp=n,maxn=0;
for(int i=0;i<n-1;i++){
    if(ar[i]%10==5 && ar[i]>ar[i+1] && ar[i]>maxn)maxn=ar[i];
}
for(int i=0;i<n;i++){
    if(ar[i]<maxn)maxp--;
}
cout<<maxp;
    return 0;
}
