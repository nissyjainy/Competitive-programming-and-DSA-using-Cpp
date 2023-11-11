#include <bits/stdc++.h>
using namespace std;
private:
// jo bhai hu shu kau chu ki tare aama jo ki tare koi node che ae tare visited che ki nahi ane ae tare parent hoy to b=vnadho nathi 
// jo tare visited che ane tare parent nathi to tare cyclic aavshe ok
//tare parent ane visited walu pan ek data structure banavu padshe ok  
bool dfs(int node,int parent,vector<int> adj,vector<int>visited)
{
    visited[node] = 1;
    for(auto neighbour : adj[node])
    {
        //have jo ki tare visited che ki nahi ok 
        if(!visited[node])
        {
            if(dfs(neighbour,node,adj,visited)==true)
            {
                return true;
                // jo hu shu kau chu ki tare ek vaar true thai gayu to always true j thashe ok 
            }
        }
        else  if(visited[node]==1 && node != parent)
        {
            return true;
            // aa to tare cindition che ok ki tare aa nathi j khabar padshe ki cycle che

        }
        // jo have visited j nathi ok


    }
    return false;
    // jo aa tare j conditon che to che ne tare false j return karvanu che ok 
}
public:

int main()
{
   //initillay tu che ne visited array ne che ne 0 mark kar ok 
   //adj ane ketli vertices aape che aa ok 
   vector<int> visited;
   int node = 0;
   int visited[V] = {0};
  // ahiya mei vector define karyu che visited nu ok 
  // aa tare che ne unconnected graph mate che ok 
   for(int i=0;i<V;i++)
   {
    //here V is the number of vertices in the graph
      if(!visited[i])
      {
        //to aagad fai call kar dfs ne ok 
        if(dfs(0,-1,adj,visited)==true)
        {
            return true;
        }
      }
   }
   return false;
// aa che ne tare unconnected mate che ok to dar vakhte aa use thashe ok 

}