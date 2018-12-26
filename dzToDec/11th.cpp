#include <iostream>
#include <vector>
using namespace std;
void qSort(vector <int>& arr, int left, int right) {
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
    int n;
    cin>>n;
    int h;
    if(n%2==0)h=n/2;
    else h=h/2+1;
    vector <int> ar(n);
    for(int i=0;i<n;i++){
     cin>>ar[i];
    }
    qSort(ar,0,n);
    int k=1;
    for(int i=1;i<n;i++){
        if(ar[i]==ar[i-1]){
                k++;
                if(k==h){
                    cout<<ar[i];
                    break;
                }
        }
    }
    return 0;
}
