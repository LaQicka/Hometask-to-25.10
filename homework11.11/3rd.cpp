#include <iostream>

using namespace std;

int main()
{
    int n,m=0,k=0,i=0;
    cin>>n;
    while(m!=n){
            bool flag=true;
            bool flag2=true;
        for(int j=2;j<i;j++){
            if(i%j==0){flag=false;
                    break;}
        }
        if(i<2)flag=false;
        if(flag==true){k++;
        for(int j=2;j<k;j++){
            if(k%j==0){
                flag2=false;
                break;
            }
          }
          if(k<2)flag2=false;
          if(flag2==true)m++;
        }
        i++;
    }
    cout<<i-1;
    return 0;
}
