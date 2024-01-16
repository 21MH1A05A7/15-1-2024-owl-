#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int ma=0;
		int mi=INT_MAX;
		vector<int> v1;
		int cu=0;
		for(int j=0;j<n;j++){
			int a,x;
			cin>>a>>x;
			if(a==1){
				ma=max(x,ma);
			}
			if(a==2){
				mi=min(mi,x);
			}
			if(a==3){
				v1.push_back(x);
			}
		}
		for(int k=0;k<v1.size();k++){
			if(v1[k]>=ma && v1[k]<=mi){
				cu+=1;
				}	
		}

			if(mi-ma-(cu)<0){
				cout<<0<<endl;
			}
			else{
				cout<<mi-ma-(cu)+1<<endl;	
			}
			
	}
	return 0;
}
