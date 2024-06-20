#include <bits/stdc++.h> 
using namespace std;
int findMSB(int n){
	// Write your code here
	if(n==0)
	{
		return 0;
	}
	 int ans=0;
	while(n>1)
	{
		n = n>>1;
		ans++;
	}
   return 1<<ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int msb = findMSB(n);
        cout<<msb<<endl;
    }
    return 0;
}