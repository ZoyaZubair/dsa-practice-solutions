class Solution {
public:
    string makeFancyString(string s) {
        int cnt=1;
        int n=s.size();
        char ch=s[0];
        string ans;
        ans.push_back(ch);
        for(int i=1;i<n;i++){
            if(s[i]==ch){
                cnt++;
                if(cnt<3) ans.push_back(s[i]);
            }
            else{
                ans.push_back(s[i]);
                cnt=1;
                ch=s[i];
            }
        }
        return ans;
    }
};
