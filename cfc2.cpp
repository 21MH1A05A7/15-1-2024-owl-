#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		string s1;
		string s2;
		int c1=0,c2=0;
		cin>>s1;
		cin>>s2;		
		for(int i=0;i<n;i++){
			if(s1[i]=='1' and s2[i]=='0'){
				c1+=1;
			}
			if(s1[i]=='0' and s2[i]=='1'){
				c2+=1;
			}
		}
		if(c1>c2){
			cout<<(c1-(c1-c2)+(c1-c2))<<endl;
		}
		else if(c1==c2){
			cout<<c1<<endl;
		}
		else{
			cout<<(c1+(c2-c1))<<endl;
		}
	}
}
