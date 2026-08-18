class distComp{
    public:
        bool operator()(const vector<int>& a, const vector<int>& b){
            return a[0]*a[0] + a[1]*a[1] > b[0]*b[0] + b[1]*b[1];
        }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, distComp> minHeap;

        for(auto& point:points){
            minHeap.push({point[0], point[1]});
        }

        vector<vector<int>> res;
        for(int i = 0; i < k; i++){
            res.push_back(minHeap.top());
            minHeap.pop();
        }
        return res;
    }
};
