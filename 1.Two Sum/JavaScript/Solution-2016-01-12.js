/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var output = new Array(2);
    var len = nums.length;
    for(var i = 0; i < len; i++) {
        for( var j = i+1; j < len; j++) {
            if(nums[i] + nums[j] == target) {
                output[0] = i+1;
                output[1] = j+1;
                return output;
            }
        }
    }
};