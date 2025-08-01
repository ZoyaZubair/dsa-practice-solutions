class Solution {
public:

    vector<int> returnRows(int row){
        long long ans=1;
        vector<int> ls;
        ls.push_back(ans);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans/=(i);
            ls.push_back(ans);
        }
        return ls;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ansList;
        for(int i=1;i<=numRows;i++){
            vector<int> temp=returnRows(i);
            ansList.push_back(temp);
        }
        return ansList;
    }
};
