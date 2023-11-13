#include <bits/stdc++.h>
using namespace std;
bool bfs(int node , int visited[],int adj[])
{
    queue<pair<int,int>>q;
    visited[node]= 1;
    q.push({node,-1});
    //initially tare che ne parent -1 hashe ok 
    while(!q.empty())
    {
        int node1 = q.front.first;
        int parent = q.front.second;
        q.pop();
        for(auto neighbour:adj[node1])
        {
            //have che ne tu neighbour mate ja ok 
            if(!visited[node1])
            {
            visited[neighbour]= 1;
            q.push({neighbour,node1});
            }
            else if(parent!=neighbour)
            {
                //aa condition to same che tare ok 
                // ki visited to che but tare neighbour is not eqaul to node 
                return true;
            }
        }
        return false;
    }
    //logic to aakhu sachu che khabr pan padi gayi ok done

}
int main()
{
   int node = 0;
   int visited[V] = {0};
   //visited tare che ne vertices sudhi j jashe ok 
    for(int i=0;i<V;i++)
   {
    //here V is the number of vertices in the graph
      if(!visited[i])
      {
        //to aagad fai call kar dfs ne ok 
        if(bfs(i,adj,visited)==true)
        {
            return true;
        }
      }
   }
   return false;
    
}