class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> parent(n+1);
        for(int i=1;i<=n;i++) parent[i]=i;
        for(auto &e:edges){
            int u=e[0], v=e[1];
            int pu=u;
            while(parent[pu]!=pu) pu=parent[pu];
            int pv=v;
            while(parent[pv]!=pv) pv=parent[pv];

            if(pu==pv) return e;

            parent[pv]=pu;
        }      
        return {};
    }
};
