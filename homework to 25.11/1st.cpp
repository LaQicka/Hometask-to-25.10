#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

int main()
{
long int const n=78487894;
int ymax=n/2019;
if(ymax%2!=0)ymax--;
for(int y=2;y<ymax;y+=2){
    for(int x=1;x<n/2018;x++){
        if(y*2019+x*2018==n)cout<<x<<" "<<y<<endl;
    }
}
return 0;
}
//алгоритм эффективный поскольку мы выполняем действий намного меньше, чем если бы искали корни полным перебором. В условии стоит 2019 поскольку по этому числу шагов меньше чем по 2018
