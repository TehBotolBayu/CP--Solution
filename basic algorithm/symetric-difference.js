function s(a, b){
    let l = 0, r = 0;
    let x = a.length;
    let y = b.length;
    let n = [];
    while(l<x && r<y){
        if(a[l] < b[r]){
            n.push(a[l]);
            l+=1;
        } else if(a[l] > b[r]){
            n.push(b[r]);
            r+=1;
        } else {
            l+=1;
            r+=1;
        }
    }
    while(l < x){
        n.push(a[l]);
        l+=1;
    }
    while(r < y){
        n.push(b[r]);
        r+=1;
    }
    return n;
}

function sym(args) {
    for(let i = 0; i<arguments.length; i++){
        arguments[i] = arguments[i].sort();
        arguments[i] = [...new Set(arguments[i])];
    }
    let z = 0;
    while(z < arguments.length-1){
        let ans = s(arguments[z], arguments[z+1]);
        z+= 1;
        arguments[z] = ans;
    }

    return arguments[z];

}
  
console.log(sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3]));