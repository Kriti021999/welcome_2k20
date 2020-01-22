#include <bits/stdc++.h>
using namespace std;
int c(long long int y)
{
	int r=0;
	if(y%2==0 && y%5!=0 && y%11!=0)
	{
		r=1;
	}
	else if(y%2!=0 && y%5==0 && y%11!=0)
	{
		r=2;
	}
	else if(y%2!=0 && y%5!=0 && y%11==0)
	{
		r=3;
	}
	else if(y%2==0 && y%5==0 && y%11!=0)
	{
		r=4;
	}
	else if(y%2==0 && y%5!=0 && y%11==0)
	{
		r=5;
	}
	else if(y%2!=0 && y%5==0 && y%11==0)
	{
		r=6;
	}
	else if(y%2==0 && y%5==0 && y%11==0)
	{
		r=7;
	}
	return r;
}
int main(){
	// string s="";
	long long int y;
	cin>>y;
	int count =c(y);
	if(count==0)
	{
		cout<<"\n";
	}
	else if(count==1)
	{
		cout<<"BAR";
	}
	else if(count==2)
	{
		cout<<"FOO";
	}
	else if(count==3)
	{
		cout<<"EXT";
	}
	else if(count==4)
	{
		cout<<"BARFOO";
	}
	else if(count==5)
	{
		cout<<"BAREXT";
	}
	else if(count==6)
	{
		cout<<"EXTFOO";
	}
	else if(count==7)
	{
		cout<<"BAREXTFOO";
	}
	return 0;

}