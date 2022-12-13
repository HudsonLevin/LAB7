int adiff (int a,int b){
    int diff,x;
    diff = abs(a-b);
    x = abs(diff-360);
    if(diff >= 360){
        diff = diff%360;
    }
    if(x < diff){
        diff=x;
    }
    return diff ;
}

