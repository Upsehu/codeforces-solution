#include<bits/stdc++.h> 
using namespace std;
int main()
{	 int t,x1,y1,x2,y2;
	cin>>t>>x1>>y1>>x2>>y2;
	char s[t];
	for(int i=0;i<t;i++)
		cin>>s[i];

	x1 = x1-x2;
	y1 = y1-y2;
	int flag = 0;
	for(int i=0;i<t;i++){
		if(x1>0 && s[i]=='W'){
			x1--;
		}
		if(x1<0 && s[i]=='E')
			x1++;
		if(y1>0 && s[i]=='S')
			y1--;
		if(y1<0 && s[i]=='N')
			y1++;
		if(x1==0 && y1==0){
			flag = 1;
			cout<<i+1<<endl;
			break;
		}
	}
		
	if(flag == 0)
		cout<<-1<<endl;

	return 0;
}	
