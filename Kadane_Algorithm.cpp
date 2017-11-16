//Contiguous sub-array with maximum sum

#include<bits/stdc++.h>
using namespace std;

int Kadane(vector<int> arr, int n){
	int sum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
    	sum+=arr[i];
    	if(maxSum<sum){
    		maxSum=sum;
    	}
    	if(sum<0){
    		sum=0;
    	}
    	
	}
	return maxSum;
}

int main(){
	int t=0;
	cin >> t;
	while(t--){
		int n=0;
		cin >> n;
		if(n>0){
		    vector<int> arr(n,0);
	    	
	    	for(int i=0;i<n;i++){
	    		cin >> arr[i];
	    	}
	    	
	    	cout << Kadane(arr,n) << endl;
		}
	}
	
	return 0;
}