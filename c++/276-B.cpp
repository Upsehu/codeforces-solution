#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int arr[26]={0};
	for(int i=0;i<s.length();i++)
		arr[s[i]-'a']++;

	int count1=0;	
	for(int i=0;i<26;i++){
		if(arr[i]&1)
			count1++;
	}
	if(count1==0 || (count1&1))
		cout<<"First"<<endl;
	else
		cout<<"Second"<<endl;

	return 0;




}
