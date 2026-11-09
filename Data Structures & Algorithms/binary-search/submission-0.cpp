class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;    // left pointer starts at beginning, right pointer starts at end

        while (left <= right) {
            int mid = left + ((right - left) / 2);
            if (nums[mid] > target) {       //middle is greater than target (right binary)
                right = mid - 1;            //reduce right window size
            }
            else if (nums[mid] < target){   //middle is less than targget (left binary)    
                left = mid + 1 ;              //reduce left window size
            }    
            else {
                return mid;                 //target is middle or not found
            }
        }
        return -1;
    }
};
