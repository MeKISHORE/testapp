#include<bits/stdc++.h>
using namespace std;
int main(){
 	int t;
  	cin>>t;
  while(t--){
  	int N;
  	cin>>N;
  	int arr[N];
  	for(int i=0;i<N;i++)
      cin>>arr[i];

    vector<pair<int,int>>res;
    for(int i=0;i<N;i++)
		for(int j=i+1;j<N;j++){
			if(arr[i]+arr[j]%3!=0){
				pair<int,int>temp;
				temp = make_pair(arr[i],arr[j]);
				res.push_back(temp);
			}
		}


	if(res.size()<arr.size)
		cout<<"Yes";
	else
		cout<<"No";
	

	


  }
  
  
}