class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for (int i = 0; i < s.length(); i++) {
            map<char, int> mp;
            for (int j = i; j < s.length(); j++) {
                mp[s[j]]++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                
                // Calculate maximum and minimum frequency correctly
                for (auto& p : mp) {
                    maxi = max(maxi, p.second);
                    mini = min(mini, p.second);
                }
                
                sum += (maxi - mini);
            }
        }

        return sum;
    }
};