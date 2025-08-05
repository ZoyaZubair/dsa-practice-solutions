
// 3477. Fruits Into Baskets II

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            bool flag=false;
            for(int j=0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j]){
                    flag=true;
                    baskets.erase(baskets.begin()+j);
                    break;
                }
            }
            if(flag==false) cnt++;
        }
        return cnt;
    }
};
