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
int a,b;
cin>>a>>b;
if(a>b){
    b=a+b;
    a=b-a;
    b=b-a;
}
vector <int> ar(n);
for(int i=0;i<n;i++){
    cin>>ar[i];
}
qSort(ar,0,n);
int j=0;
bool flag=false,flag2=false;
while(j<n && flag==false){
    if(ar[j]==a)flag=true;
    j++;
}
while(j<n && flag2==false){
    if(ar[j]==b){
        flag2=true;
        cout<<"Y";
    }
    j++;
}
if(flag2==false)cout<<"N";
return 0;
}
