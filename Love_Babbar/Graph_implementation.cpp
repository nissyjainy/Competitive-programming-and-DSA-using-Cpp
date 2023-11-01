#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> m;
    // adjency wali list banai che mei ok
    void add(int u, int v, bool direction)
    {
        // direction 0 mare unordered mate che ok
        // direction 1 mare ordered mate che ok
        //initially to ek ne map karu j chu ok 
        m[u].push_back(v);
        if (direction == 0)
        {
            // unordered che ok atle biji baju bhi tare link set thai jashe ok
            m[v].push_back(u);
        }
    }
    void print()
    {
        for (auto it : m)
        {
            cout << it.first << "->"; // aa int print thay che ok 
            for (auto x : m.second)
            {
                cout << x << " , ";   // ane je mare list ke vector che ae mare traverse karine print thay che ok 
            }
            cout << endl;
        }
    }
} int main()
{
    int n;
    cout << "Enter the number of nodes"
         << "\n";
    cin >> n;
    int m;
    cout << "Enter the number of edges"
         << "\n";
    cin >> m;
    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.add(u, v, 0);
    }
    g.print();
    return 0;
}


vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    vector<int>ans[n];
    for(int i=0;i<m;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        // neighbours calculate thai gaya che
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    vector<vector<int>> adj[n];
    for(int i=0;i<n;i++) // jetli nodes che tetlu j chalaish
    {
        adj[i].push_back(i);
        for(int j = 0; j<ans.size();j++)
        {
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}

// Second attempt ok 
// aa list thi karyu che ok 
# include <bits/stdc++.h>
using namespace std;
class graph
{
    public:
    unordered_map<int,list<int>> adj;
    void addedge(int u int v,bool direction)
    {
        // u ane v 1st edge che ane 2nd edge che
        // direction 1 = directed graph 
        // direction 0 = undirected graph
        //initially to banay ok 
        adj[u].push_back(v); 
        if(direction == 1)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        for(auto i:adj)
        {
            cout<<i.first << "->"; // atle ahiya int aavshe tare je number che ae aavshe ok 
            for(auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
     int n ;
     cout<<"Enter the number of nodes"<<endl;
     cin>>n;
     int m ;
     cout<<"Enter the number of edges"<<endl;
     cin>>m;
     graph g;
     // ahoya tane m atle edges kem lidhu khabar padi gayi kem ki hu edges j nakhish n atle to mane khabar padshe ki 
     // adjacent che ki nahi 
     for(int i=0;i<m;i++)
     {
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
     }
     g.print();
     return 0;
}