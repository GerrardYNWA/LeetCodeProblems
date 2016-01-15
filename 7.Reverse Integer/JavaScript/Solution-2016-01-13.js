/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var flag = 1;
    var y = Math.abs(x);
    var sum = 0;
    var temp;
    var max = 2147483647;
    
    if(x === 0) {
        return 0;
    }
    else if(x < 0) {
        flag = -1;
    }
    
    while(y) {
        temp = y % 10;
        if(sum > parseInt((max - temp) / 10)) {
            return 0;
        }
        sum = sum * 10 + temp;
        y = parseInt(y / 10);
    }
    
    return flag * sum;
};