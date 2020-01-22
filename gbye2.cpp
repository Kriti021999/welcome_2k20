#include <bits/stdc++.h>
using namespace std;
string func(string str1, string str2) 
{ 
    string res=""; 
    int n1 = str1.length(), n2 = str2.length(); 
  
    // Compare str1 and str2 
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
    { 
        if (str1[i] != str2[j]) 
            break; 
        res.push_back(str1[i]); 
    } 
  
    return (res); 
} 

int main()
{
	int n;
	vector <string> s;
	cin>>n;
	string y="";
	for(int i=0;i<n;i++)
	{
		cin>>y;
		s.push_back(y);
	}
	int q;
	cin>>q;
	int i,j,k;
	for(int u=0;u<q;u++)
	{
		cin>>i>>j>>k;
		i=i-1;
		j=j-1;
		k=k-1;
		string g=func(s[i],s[j]);
		string result=func(g,s[k]);
		cout<<result.size()<<endl;

	}
}