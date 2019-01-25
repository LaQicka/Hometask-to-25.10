#include <iostream>
#include <vector>
using namespace std;
bool check(int a, int b){
    bool flag=true;;
if(a>b){
    for(int i=2;i<=b;i++){
        if(a%i==0 && b%i==0){
            flag=false;
            break;
        }
    }
}
else {
    for(int i=2;i<=a;i++){
        if(a%i==0 && b%i==0){
            flag=false;
            break;
        }
    }
}
return flag;
}
int main()
{
   int n,k;
   cin>>k>>n;
   vector <int> ar(k);
   vector <int> arr(k);
   for(int i=0;i<k;i++){
    cin>>ar[i];
   }
   int*** sr = new int**[k-1];
   for(int i=0;i<k-1;i++){
        sr[i] = new int* [k-1];
        for(int j=0;j<k-1;j++){
            sr[i][j] = new int [k-1];
        }
   }
   for(int i=0;i<k-1;i++){
    for(int j=0;j<k-1;j++){
        for(int f=0;f<k;f++){
            sr[i][j][f]=0;
        }
    }
   }
   for(int i=0;i<k-1;i++){
        for(int j=0;j<k-1;j++){
         sr[i][j][0]=ar[i];
        }
   }
   for(int i=0;i<k-1;i++){
    for(int j=0;j<k-1;j++){
        for(int f=1,u=1;f<k-i,u<k;f++,u++){
        if(ar[u+j+i]>sr[i][j][f-1] && u+i+j<k){
          sr[i][j][f]=ar[u+j+i];
        }
        else f--;
        }
    }
   }
   for(int i=0;i<k-1;i++){
    for(int j=0;j<k-1;j++){
        for(int f=0;f<k;f++){
                cout<<sr[i][j][f]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
   }
   int l=0;
   for(int i=0;i<k-1;i++){
    for(int j=0;j<k-1;j++){
        int p=1;
        int y=0;
        vector <int> fr(1);
        for(int f=0,u=0;f<k;f++){
            if(sr[i][j][f]!=0 && n%sr[i][j][f]==0 && (check(sr[i][j][f],fr[u])==true || u==0) && p*sr[i][j][f]<=n){
                u++;
                fr[u]=sr[i][j][f];
                p*=sr[i][j][f];
                y=u;
            }
            else {
                if(y>1)l++;
                break;
            }
        }
    }
   }
   cout<<l;
   for(int i=0;i<k-1;i++){
    for(int j=0;j<k-1;j++){
        delete [] sr[i][j];
    }
    delete [] sr[i];
   }
   delete [] sr;
    return 0;
}
