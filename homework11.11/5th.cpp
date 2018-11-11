#include <iostream>
using namespace std;
long long lastnum(long long a, long long b){
    long long c=a;
  if(b>0){for(int i=1;i<b;i++){
        a*=c;
    }}
else if (b<0){
    b=(-b);
    for(int i=1;i<b;i++){
        a*=c;
    }
    a=1/a;
}
else if(b==0)a=a;
return (a%10);

}
int main()
{
 long long a,b;
 cin>>a>>b;
 cout<<lastnum(a,b);
    return 0;
}
