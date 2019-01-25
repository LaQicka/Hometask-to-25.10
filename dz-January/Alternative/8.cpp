#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
int n,m;
cin>>n;
vector <string> ar(n);
for(int i=0;i<n;i++){
    cin>>ar[i];
}
cin>>m;
vector <string> arr(m);
vector <int> rar(m);
for(int i=0;i<m;i++){
    cin>>arr[i];
}
for(int i=0;i<m;i++){
    bool flag=true;
    for(int j=0;j<n;j++){
        if(ar[j].length()<arr[i].length()){
            flag=false;
            break;
        }
        for(int l=0;l<arr[i].length();l++){
            if(ar[j][l]!=arr[i][l]){
                flag=false;
                break;
            }
        }
        for(int l=ar[j].length()-arr[i].length(),f=0;l<ar[j].length(),f<arr[i].length();l++,f++){
            if(arr[i][f]!=ar[j][l]){
                flag=false;
                break;
            }
        }
        if(flag==true)rar[i]++;
    }
}
for(int i=0;i<m;i++){
    cout<<rar[i]<<" ";
}
    return 0;
}
