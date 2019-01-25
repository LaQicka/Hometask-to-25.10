#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <char> ar(n+m);
    if(n==0){
        for(int i=0;i<m;i++){
            cout<<"g";
        }
    }
    else if(m==0){
        for(int i=0;i<n;i++){
            cout<<"b";
        }
    }
    else{
    int x=1,y=0,i=1;
    ar[0]='b';
    while(i<n+m){
        if(ar[i-1]=='b' || ar[i-2]=='b'){
            if(y<m){
                ar[i]='g';
                y++;
            }
            else{
                ar[i]='b';
                x++;
            }
        }
        else {
            if(x<n){
                ar[i]='b';
                x++;
            }
            else {
                ar[i]='g';
                y++;
            }
        }
        i++;
    }
    for(int i=0;i<n+m;i++){
        cout<<ar[i];
    }
    }
return 0;
}
