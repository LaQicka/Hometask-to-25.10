#include <iostream>

using namespace std;
void swapp(int& a,int& b){
a=a+b;
b=a-b;
a=a-b;
}
void qSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot)
        i++;
        while (arr[j] > pivot)
        j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
    if (left < j)
    qSort(arr, left, j);
    if (i < right)
    qSort(arr, i, right);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int m=0;
    qSort(ar,m,n-1);
    cout<<ar[k-1];
    return 0;
}
