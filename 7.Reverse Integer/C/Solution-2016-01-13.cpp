int reverse(int x) {
    int flag=1;
    int sum=0;
    int temp;
    int y=abs(x);
    
    if(x==0) {
        return 0;
    }
    else if(x<0) {
        flag=-1;
    }
    
    while(y) {
        temp=y%10;
        if(sum>(INT_MAX-temp)/10) {
            return 0;
        }
        sum=sum*10+temp;
        y=y/10;
    }
    
    return flag*sum;
}