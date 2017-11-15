#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<int>> graph, int n){
    vector<int> dist(n,INT_MAX);
	dist[0]=0;
	
	queue<int> q; 
	q.push(0); //push source index
	
	//calculate
	while(!q.empty()){
	    int i=q.front();
	    q.pop();
	    for(int j=0;j<n;j++){
			if(graph[i][j]>0 && dist[j]>dist[i]+graph[i][j])
			{
			    dist[j]=dist[i]+graph[i][j];
			    q.push(j);
			}
		}
	}
	
	//print
	for(int i=0;i<n;i++){
		cout << dist[i] << " ";
	}
}

int main(){
	int n=0;
	cin >> n;
	if(n>0){
	    vector<int> v(n,0);
    	vector<vector<int>> graph(n,v);
    
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin >> graph[i][j];
    		}
    	}
    	
    //     int m;
    //     cin >> m;
    //     for(int i=0;i<m;i++){
    // 		int x,y,val;
    // 		cin >> x>>y>>val;
    // 		graph[x-1][y-1]=val;
    // 		graph[y-1][x-1]=val;
    // 	}
    	
    	dijkstra(graph,n);
	}
	return 0;
}