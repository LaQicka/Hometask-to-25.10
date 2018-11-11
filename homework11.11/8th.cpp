#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int** ar=new int*[n];
    for(int i=0;i<n;i++){
        ar[i]=new int [m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ar[i][j]=0;
        }
    }
    double p,pk;
    cin>>p;
    pk=n*m*p;
    for(int i=0;i<pk;i++){
            bool flag=false;
    while(flag!=true){
            int nk,mk;
            srand(time(0));
        nk=rand()%n;
        srand(time(0)+1);
        mk=rand()%m;
        if(ar[nk][mk]==0){
            ar[nk][mk]=1;
            flag=true;
        }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        delete[] ar[i];
    }
    delete[] ar;
    system("pause");
    return 0;
}
