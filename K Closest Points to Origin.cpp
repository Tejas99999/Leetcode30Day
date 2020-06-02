class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<pair<float,int>>dist;
        vector<vector<int>>v;
        for(int i=0;i<points.size();i++)
        {
            dist.push_back(make_pair(sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]),i));

        }
        sort(dist.begin(),dist.end());
        //cout<<dist[0].first;
        for(int i=0;i<K;i++)
        {
            v.push_back(points[dist[i].second]);
        }
        return v;
    }
};
