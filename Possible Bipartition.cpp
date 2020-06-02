class Solution {
public:
   set <int> groups[2];
   bool dfs(int node, vector <int> graph[], int x){
      int aux = 1 - x;
      if(groups[aux].count(node)) return false;
      groups[x].insert(node);
      for(int i = 0; i < graph[node].size(); i++){
         int u = graph[node][i];
         if(!groups[aux].count(u) && !dfs(u, graph, aux)) return false;
      }
      return true;
   }
   bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
      vector <int> graph[N + 1];
      for(int i = 0; i < dislikes.size(); i++){
         int u = dislikes[i][0];
         int v = dislikes[i][1];
         graph[u].push_back(v);
         graph[v].push_back(u);
      }
      for(int i = 1; i <= N;i++){
         if(!groups[0].count(i) && !groups[1].count(i)){
            if(!dfs(i, graph, 0)) return false;
         }
      }
      return true;
   }
};
