#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,maxpower=1;
    bool flag=false;
    cin>>n;
    while(n>2){
        cout<<n<<endl;
        if(n==3){
            maxpower*=3;
            break;
        }
        maxpower*=2;
        n-=2;
    }
    cout<<endl;
    cout<<maxpower;
    return 0;
}
