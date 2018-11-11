#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n,sum=0,k=0,l;
    cin>>n;
    l=n;
    while(l>0){
        l=l/10;
        k++;
    }
    vector <int> ar(k+1);
    for(int i=1;i<=k;i++){
        ar[i]=n%10;
        n/=10;
    }
    for(int i=1;i<=k;i++){
        if(ar[i]%2==1)sum+=ar[i];
    }
    cout<<sum;
    return 0;
}
