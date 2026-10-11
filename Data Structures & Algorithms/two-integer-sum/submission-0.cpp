class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();    // initialize n as size of nums array
        unordered_map<int, int> prevmap;    // prevmap is the previous hashmap arary

        for (int i = 0; i < n; i++) {       // iterate i after loop finishes
            int difference = target - nums[i];
            if (prevmap.find(difference) != prevmap.end()){
                return {prevmap[difference], i};
            }
            prevmap.insert({nums[i], i});

        }
        return {};
    }
};
