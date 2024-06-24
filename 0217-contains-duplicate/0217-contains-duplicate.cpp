

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int n = nums.size(); 
        
        std::unordered_set<int> seen; 
        
        for (int i = 0; i < n; ++i) {
            if (seen.find(nums[i]) != seen.end()) {
                return true; 
            }
            seen.insert(nums[i]);
        }
        
        return false; 
    }
};
