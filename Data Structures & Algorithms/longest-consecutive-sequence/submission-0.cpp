class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int ans =0;
        unordered_set<int> seen{nums.begin(),nums.end()};

        for(int i : seen){
            if(seen.count(i-1))
            continue;
            int length = 1;
            while (seen.count(++i)) 
            ++length;
            ++i;
            ans = max(ans,length);
        }
       return ans;    
    }
};
