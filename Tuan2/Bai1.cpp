#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"Nhap thu la: ";cin>>n;
		if(n>7 || n<1)
		{
			cout<<"Moi nhap lai thu !\n";
		}
	}while(n>7 || n<1);
	if(n==1) cout<<"Sunday";
	else if(n==2) cout<<"Monday";
	else if(n==3) cout<<"Tuesday";
	else if(n==4) cout<<"Wednesday";
	else if(n==5) cout<<"Thursday";
	else if(n==6) cout<<"Friday";
	else if(n==7) cout<<"Saturday";
	return 0;
}
