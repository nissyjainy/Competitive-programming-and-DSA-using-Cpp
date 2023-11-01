#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges,
                     int source) {
  // create the adjacency list
  unordered_map<int, list<pair<int, int>>> adj;
  for (int i = 0; i < edges; i++) // always edges j hoy che dar vakhte
  {
    int u = vec[i][0];
    int v = vec[i][1];
    int w = vec[i][2];
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
  }
  // distance array banay
  vector<int> distance(vertices); // distance.size = vertices
  for (int i = 0; i < vertices; i++) {
    distance[i] = INT_MAX;
  }
  set<pair<int, int>> st; // (distance,node)
  distance[source] = 0;
  st.insert(make_pair(0, source));
  while (!st.empty()) {
    // top mate ek vastu lakh
    auto top = *(st.begin());
    // set ma pehlo element kadh 
    int node_distance = top.first; // top ma thi set mathi kadh ok
    int top_node = top.second;
    // set ma minimum lay ok
    //  ae by default j aai jay
    //ahiya pop walu ok
    st.erase(st.begin());
    // first j set mathi erase kar ok
    // have neighbour ma traverse kar ok
    for (auto neighbour : adj[top_node]) {
      // top na neighbour kadh ok
      if (node_distance + neighbour.second < distance[neighbour.first])
      // node_distance tare node ni pehla ni bhi value che
      // distance array ma jo neighbour.first nu je mei kadhyu che
      {
        auto record = st.find(make_pair(distance[neighbour.first], neighbour.first));
        // tare ahiya check kar ki pehla set ma che ki nahi hoy to cancle kar
        if (record != st.end()) {
          // mali gayu to
          st.erase(record);
        }

        distance[neighbour.first] = node_distance + neighbour.second;
        // set ma add kar
        st.insert(make_pair(distance[neighbour.first], neighbour.first));
      }
    }
  }
  return distance;
}
