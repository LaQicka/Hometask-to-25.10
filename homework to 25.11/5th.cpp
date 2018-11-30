#include <iostream>
using namespace std;
int gh(int n){
int p=1;
while(n>9){
if(n%10!=0)p*=(n%10);
n/=10;
}
p*=n;
return p;
}
int main(){
int n,k;
cin>>n>>k;
int* ar= new int[n];
int* arr = new int[n];
int j=0;
for(int i=0;i<n;i++){
cin>>ar[i];
if(gh(ar[i])>k){
arr[j]=ar[i];
j++;
}
}
for(int i=0;i<j;i++){
cout<<arr[i]<<" ";
}
}
