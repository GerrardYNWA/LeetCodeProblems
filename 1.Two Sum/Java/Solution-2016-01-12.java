public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] index = new int[2];
        int len = nums.length;
        for(int i=0; i<len; i++) {
            for(int j=i+1; j<len; j++) {
                if(nums[i] + nums[j] == target) {
                    index[0] = i+1;
                    index[1] = j+1;
                    return index;
                }
            }
        }
        return index;
    }
}