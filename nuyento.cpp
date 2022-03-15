#include<iostream>
using namespace std;
int main(){
	int n,dem;
	cout<<"Nhap n la: "; cin>>n;
	for( int i = 1; i <= (n/2); i++)
	{
		if(n%i == 0) dem++;
	}
	if( dem==1) cout<<n<<" la so nguyen to!!!";
	else cout<<n<<" ko phai la so nguyen to";
	return 0;
}
