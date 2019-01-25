#include <iostream>
#include <vector>
using namespace std;
struct cn{
    int w;
    int c;
};
void qSort(vector <cn>& arr, int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2].w;
    while (i <= j) {
        while (arr[i].w < pivot)
        i++;
        while (arr[j].w > pivot)
        j--;
        if (i <= j) {
            tmp = arr[i].w;
            arr[i].w = arr[j].w;
            arr[j].w = tmp;
            i++;
            j--;
        }
    };
    if (left < j)
    qSort(arr, left, j);
    if (i < right)
    qSort(arr, i, right);
}
int minn(vector <cn>& arr,int left,int n){
        int min=0;
    for(int i=left;i<n;i++){
        if(min==0)min=arr[i].c;
        else if(min>arr[i].c)min=arr[i].c;
    }
    return min;
    }
int main()
{
    int n,m;
    cin>>n;
    vector <int> wcl(n);
    for(int i=0;i<n;i++){
        cin>>wcl[i];
    }
    cin>>m;
    vector <cn> ar(m);
    for(int i=0;i<m;i++){
        cin>>ar[i].w>>ar[i].c;
    }
qSort(ar,0,m-1);
int mincost=0;
for(int i=0;i<n;i++){
    int k;
    for(int j=0;j<m;j++){
        if(ar[j].w>=wcl[i]){k=j;
                            break;}
    }
    mincost+=minn(ar,k,m);
}
cout<<mincost;
    return 0;
}
