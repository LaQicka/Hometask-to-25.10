#include <iostream>
using namespace std;
/*
10=A
11=B
12=C
13=D
14=E
15=F
16=G
17=H
18=I
19=J
20=K
21=L
22=M
23=N
24=O
25=P
26=Q
27=R
28=S
29=T
*/
void pr10(int n, int k) {
	if (n > k) {
		pr10(n / k, k);
		cout << n % k;
	}
	else cout << n / k << n % k;
}
void pr(int n, int k) {
	if (n > k) {
		pr(n / k, k);
		switch (n%k)
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		case 16:cout << "G"; break;
		case 17:cout << "H"; break;
		case 18:cout << "I"; break;
		case 19:cout << "J"; break;
		case 20:cout << "K"; break;
		case 21:cout << "L"; break;
		case 22:cout << "M"; break;
		case 23:cout << "N"; break;
		case 24:cout << "O"; break;
		case 25:cout << "P"; break;
		case 26:cout << "Q"; break;
		case 27:cout << "R"; break;
		case 28:cout << "S"; break;
		case 29:cout << "T"; break;
		case 0:break;
		default:cout << n % k; break;
		}
	}
	else {
		switch (n / k)
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		case 16:cout << "G"; break;
		case 17:cout << "H"; break;
		case 18:cout << "I"; break;
		case 19:cout << "J"; break;
		case 20:cout << "K"; break;
		case 21:cout << "L"; break;
		case 22:cout << "M"; break;
		case 23:cout << "N"; break;
		case 24:cout << "O"; break;
		case 25:cout << "P"; break;
		case 26:cout << "Q"; break;
		case 27:cout << "R"; break;
		case 28:cout << "S"; break;
		case 29:cout << "T"; break;
		case 0:break;
		default:cout << n / k; break;
		}
		switch (n%k)
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		case 16:cout << "G"; break;
		case 17:cout << "H"; break;
		case 18:cout << "I"; break;
		case 19:cout << "J"; break;
		case 20:cout << "K"; break;
		case 21:cout << "L"; break;
		case 22:cout << "M"; break;
		case 23:cout << "N"; break;
		case 24:cout << "O"; break;
		case 25:cout << "P"; break;
		case 26:cout << "Q"; break;
		case 27:cout << "R"; break;
		case 28:cout << "S"; break;
		case 29:cout << "T"; break;
		case 0:break;
		default:cout << n % k; break;
		}
	}
}
int main(){
	int k, n;
	cin >> n >> k;
	if (k < 10) {
		pr10(n, k);
	}
	else {
		pr(n, k);
	}
	cout << endl;
	system("pause");
}
