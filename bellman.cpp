#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>bellman(int V, vector<vector<int>>& edges, int S){
            vector<int>dist(V,INT_MAX);
            dist[S]=0;

            for(int i=0;i<V-1;i++){
                for(auto it:edges){
                    int u=it[0];
                    int v=it[1];
                    int w=it[2];

                    if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                        dist[v]=dist[u]+w;
                    }
                }
            }
            for(auto it:edges){
                int u=it[0];
                int v=it[1];
                int w=it[2];

                if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                    cout<<"Negative cycle detected"<<endl;
                    break;
                }
            }
            return {-1};
        }
};
int main() {

	int V = 6;
	vector<vector<int>> edges(7, vector<int>(3));
	edges[0] = {3, 2, 6};
	edges[1] = {5, 3, 1};
	edges[2] = {0, 1, 5};
	edges[3] = {1, 5, -3};
	edges[4] = {1, 2, -2};
	edges[5] = {3, 4, -2};
	edges[6] = {2, 4, 3};

	int S = 0;
	Solution obj;
	vector<int> dist = obj.bellman(V, edges, S);
	for (auto d : dist) {
		cout << d << " ";
	}
	cout << endl;

	return 0;

}