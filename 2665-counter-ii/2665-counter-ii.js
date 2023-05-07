/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    
    let c = init;
    
    const increment = function(){
        c++;
        return c;
    }
    
    const reset = function(){
        c=init;
        return c;
    }
    
    const decrement = function(){
        c--;
        return c;
    }
    
    return {increment, reset, decrement};
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */