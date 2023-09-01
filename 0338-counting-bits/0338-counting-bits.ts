function countSetBits(num: number): number {
    
    let counter: number = 0, i;
    
    for(i=0;i<31;i++){
        if(num & 1<<i) counter++;
    }
    
    return counter;
    
}

function countBits(n: number): number[] {
    
    const ans: number[] = [];
    
    let i:number;
    
    for(i=0;i<=n;i++){
        ans.push(countSetBits(i));
    }
    
    return ans;

};