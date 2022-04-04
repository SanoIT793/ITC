#include<iostream>
using namespace std;
int main()
{
	int n;
	long int s=1;
	cout<<"Nhap n la: "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s*2*i;
	}
	cout<<"Tich la: "<<s;
	return 0;
}
