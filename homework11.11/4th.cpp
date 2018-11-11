#include <iostream>

using namespace std;

int main()
{
    unsigned int n,l;
    int k=0,u=0;
    cin>>n;
    l=n;
    while(l>9){
        l/=10;
        k++;
    }
    for(int i=1;i<=k;i++){
        if(n%10==0)u++;
        n/=10;
    }
    cout<<u;
    return 0;
}
