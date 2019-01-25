#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double fmin=30,fmax=4000;
    vector <double> ar(n);
    char c='c';
    string hbef;
    for(int i=0;i<n;i++){
        string h;
        if(i!=0){
            cin>>ar[i]>>h;
            if (h[0]==c){
                if(ar[i]>=ar[i-1])fmin=(ar[i]+ar[i-1])/2;
                else fmax=(ar[i]+ar[i-1])/2;
            }
            else if(hbef[0]==c){
                if(ar[i]>=ar[i-1])fmax=(ar[i]+ar[i-1])/2;
                else fmin=(ar[i]+ar[i-1])/2;
            }
        }
        else {
            cin>>ar[i];
        }
        hbef=h;
    }
    cout<<fmin<<"-"<<fmax;
    return 0;
}
