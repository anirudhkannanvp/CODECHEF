#include "bits/stdc++.h"
using namespace std;
 int arr1[2000005],k1=0,arr2[2000005],j,i,k2=0,temp,ost=0,arr3[2000005],k3=0,temp1,i1,j11,st11=1;
class Graph
{
  int V;    
  list<int> *adj;  
  public:
  Graph(int V)  { this->V = V;  adj = new list<int>[V];  }
  void addEdge(int u, int v) {  adj[u].push_back(v); adj[v].push_back(u); }
  void rmvEdge(int u, int v);
  void printEulerTour(int u);
  void printEulerUtil(int s);
   int DFSCount(int v, bool visited[]);
   int isEulerian();
  void DFSUtil(int v, bool visited[]);
  bool isConnected();
  bool isValidNextEdge(int u, int v);
};
 
 void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 bool Graph::isConnected()
{
    bool visited[V];
    int i;
  memset(visited, false, V);
 
    for (i = 0; i < V; i++)
        if (adj[i].size() != 0)
            break;
     if (i == V)
        return true;
     DFSUtil(i, visited);
     for (i = 0; i < V; i++)
       if (visited[i] == false && adj[i].size() > 0)
            return false;
 
    return true;
}
 
void Graph::printEulerTour(int u)
{
  /*int u = 0;
  for (int i = 2; i < V; i++)
      if (adj[i].size() & 1)
        {   u = i; break;  }*/
   printEulerUtil(u-1);
}
 
void Graph::printEulerUtil(int u)
{
  list<int>::iterator i;
  for (i = adj[u].begin(); i != adj[u].end(); ++i)
  {
      int v = *i;
 
      if (v != -1 && isValidNextEdge(u, v))
      {
          //printf("%d %d\n",u+1,v+1);
          arr1[k1++]=u+1;
          //arr1[k1++]=v+1;
          rmvEdge(u, v);
          printEulerUtil(v);
      }
  }
}
bool Graph::isValidNextEdge(int u, int v)
{
  int count = 0;  
  list<int>::iterator i;
  for (i = adj[u].begin(); i != adj[u].end(); ++i)
     if (*i != -1)
        count++;
  if (count == 1)
    return true;
  bool visited[V];
  memset(visited, false, V);
  int count1 = DFSCount(u, visited);
   rmvEdge(u, v);
  memset(visited, false, V);
  int count2 = DFSCount(u, visited);
   addEdge(u, v);
   return (count1 > count2)? false: true;
}
void Graph::rmvEdge(int u, int v)
{
  list<int>::iterator iv = find(adj[u].begin(), adj[u].end(), v);
  *iv = -1;
   list<int>::iterator iu = find(adj[v].begin(), adj[v].end(), u);
  *iu = -1;
}
 int Graph::DFSCount(int v, bool visited[])
{
  visited[v] = true;
  int count = 1;
 
  list<int>::iterator i;
  for (i = adj[v].begin(); i != adj[v].end(); ++i)
      if (*i != -1 && !visited[*i])
          count += DFSCount(*i, visited);
 
  return count;
}
int Graph::isEulerian()
{
    if (isConnected() == false)
        return 0;
     int odd = 0;
    for (int i = 0; i < V; i++)
        if (adj[i].size() & 1)
            odd++;
    if (odd > 2)
        return 0;
 
    return (odd)? 1 : 2;
}
 
void test(Graph &g)
{
    int res = g.isEulerian();
    if (res == 0)
    {
        printf("NO\n");
        ost=1;
    }
    else if (res == 1)
    {
        printf("NO\n");
        ost=1;
    }
    else
        {
        printf("YES\n");
        g.printEulerTour(arr2[0]);
      }
}
  
int main()
{
    
    long int n,e,a,b;
    scanf("%ld %ld",&n,&e);
    if(n==1)
    {
    while(e--){
    scanf("%ld %ld",&a,&b);
    printf("YES\n");
    }
    }
    else{
    Graph g1(n);
    while(e--)
    {
    scanf("%ld %ld",&a,&b);
    arr2[k2++]=a;
    arr3[k3++]=b;
    g1.addEdge(a-1,b-1);
    }
    test(g1);
    arr1[k1++]=arr2[0];
    if(ost==0)
    {
    for(i1=0;i1<k2;i1++)
    {   st11=1;
        temp=arr2[i1];
        temp1=arr3[i1];
       // cout<<temp<<"  HI   "<<temp1<<"  HI1  "<<i1<<endl;
        //printf("%d ",temp);
        for(int j11=0;j11<k1-1;j11++)
        {
            if(arr1[j11]==temp && arr1[j11+1]==temp1)
            {    
                st11=0;
                break;
            }
        }
        if(st11==0)
        printf("%d %d\n",temp,temp1);
        else
        printf("%d %d\n",temp1,temp);
    }
    }
     /*for(j=0;j<k2;j++)
    cout<<arr2[j]<<" ";
    cout<<endl;
     for(j=0;j<k2;j++)
    cout<<arr3[j]<<" ";
    cout<<endl;
    for(j=0;j<k1;j++)
    cout<<arr1[j]<<" ";*/
    }
 
 
 
 
    return 0;
}
