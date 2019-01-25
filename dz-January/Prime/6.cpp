#include <iostream>

using namespace std;
void rec(int x, int y, int a, int f, int &n, int &d, int z, bool flag)
{if(x==z)z=1;
    if(x==y)
    {
        if(a<n && z==1){n=a; d=f;}
    }
    else
    {
        int q, w, e, r, ww=a, ee=a, rr=a;
        q=x+2; if (q<=y){ f=f*10+1; a++; rec(q,y,a,f,n, d,z, flag);f=(f-1)/10;}
        w=x+4; if (w<=y){ f=f*10+2; ww++; rec(w,y,ww,f,n, d,z,flag);f=(f-2)/10;}
        e=x+5; if (e<=y){ f=f*10+3; ee++; rec(e,y,ee,f,n, d,z,flag);f=(f-3)/10;}
        r=x*3; if (r<=y){ f=f*10+4; rr++; rec(r,y,rr,f,n, d,z,flag);f=(f-4)/10;}
    }
}
int main()
{
  int x, y, a=0, f=0, n=999999, d, z;
  bool flag=0;
  cin>>x>>y>>z;
rec(x, y,a, f, n, d,z, flag);
if (n!=999999)cout<<d;else cout<<"NO";
    return 0;
}
