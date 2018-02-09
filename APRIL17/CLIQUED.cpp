#include<bits/stdc++.h>
using namespace std;
#define INF 9999999999999999
 
typedef pair<long long ,long long > iPair;
 
class Graph
{
long long  V;
list< pair<long long , long long > > *adj;
public:
Graph(long long  V);
void addEdge(long long  u, long long  v, long long  w);
void shortestPath(long long  s);
};
 
Graph::Graph(long long  V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
 
void Graph::addEdge(long long  u, long long  v, long long  w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
 
void Graph::shortestPath(long long  src)
{   
    set< iPair> pq;
    vector<long long > dist(V, INF);
    pq.insert(make_pair(0, src));
    dist[src] = 0;
    while(!pq.empty())
    {
        long long  u = pq.begin()->second;
        pq.erase(pq.begin());
        list< pair<long long , long long > >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            long long  v = (*i).first;
            long long  weight = (*i).second;
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                //pq.erase(make_pair(dist[v],v));
                if(dist[v]!=9999999999999999)
            {
                pq.erase(make_pair(dist[v], v));
            }
                dist[v] = dist[u] + weight;
                
                pq.insert(make_pair(dist[v], v));
            }
        }
    }
 for(long long  i=0;i<V;i++)
 cout<<dist[i]<<" ";
}
 
 
int main() {
	ios_base::sync_with_stdio(false);
	long long  t,n,k,x,m,s,m1,i,j,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>x>>m>>s;
	    m1=m+k*(k-1)/2;
	    Graph g(n);
	    for(i=0;i<k;i++)
	    {
	        for(j=i+1;j<k;j++)
	        {
	            g.addEdge(i,j,x);                                                                                                                                                                                                                                                                                                                                                             
	        }
	    }
	    while(m--)
	    {
	        cin>>a>>b>>c;
	        g.addEdge(a-1,b-1,c);
	    }
	    g.shortestPath(s-1);
	    cout<<endl;
	}
	return 0;
}
