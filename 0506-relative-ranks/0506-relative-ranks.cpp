class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string>result(score.size());
        int count=0;
        while(!pq.empty()){
            auto pair=pq.top();
            pq.pop();
            count++;
            if(count==1) result[pair.second]="Gold Medal";
            else if(count==2) result[pair.second]="Silver Medal";
            else if(count==3) result[pair.second]="Bronze Medal";
            else result[pair.second]=to_string(count);
        }
        return result;
    }
};