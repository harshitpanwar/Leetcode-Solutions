/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function(low, high) {
    
    
    if(high%2===0 && low%2===0) return (high-low)/2;
    else if(high%2!==0 && low%2!==0) return (high-low)/2 + 1;
    else return parseInt((high-low)/2)+1;
    
};