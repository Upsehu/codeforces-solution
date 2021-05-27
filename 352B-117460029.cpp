#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1];
	int max = -1;
	for(int i=1;i<n+1;i++){
		cin>>arr[i];
		if(arr[i]>max)
			max = arr[i];
	}
	int pos[max+1]={0},d[max+1];
	for(int i=0;i<max+1;i++)
		d[i] = -1;

	int count=0;
	for(int i=1;i<n+1;i++){

		if(d[arr[i]] == -2)
			continue;
		if(pos[arr[i]]==0){
			pos[arr[i]]=i;
			d[arr[i]]=0;
			count++;
		}
		else{
			if(d[arr[i]]==0){
				d[arr[i]] = i-pos[arr[i]];
				pos[arr[i]] = i;
		
		
			}
			else{
				if(d[arr[i]] == i-pos[arr[i]])
					pos[arr[i]] = i;
				else{
					d[arr[i]]=-2;	
					count--;
				}
			}
		}
	}
	cout<<count<<endl;
	for(int i=1;i<max+1;i++){
		if(d[i]>=0)
			cout<<i<<" "<<d[i]<<endl;
	}

	return 0;
}
