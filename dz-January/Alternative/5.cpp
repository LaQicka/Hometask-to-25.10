#include <iostream>
#include <vector>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector <int> ar(n);
vector <int> arr(n-2);
for(int i=0;i<n;i++){
    cin>>ar[i];
}
int mx=0,mx2=0;
for(int i=0;i<n-2;i++){
        int sm=0;
    for(int j=i;j<i+k;j++){
        sm+=ar[j];
    }
if(sm>mx){
    mx2=mx;
    mx=sm;
    sm=0;
}
else if(sm>mx2 && sm<mx){
    mx2=sm;
    sm=0;
}
else sm=0;
}
cout<<mx2;
    return 0;
}
