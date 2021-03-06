public class Solution {
    public int reverse(int x) {
        int flag=1;
        int sum=0;
        int y=Math.abs(x);
        int temp;
        
        if(x==0) {
            return 0;
        }
        else if(x<0) {
            flag=-1;
        }
        
        while(y>0) {
            temp=y%10;
            if(sum>(Integer.MAX_VALUE-temp)/10) {
                return 0;
            }
            sum=sum*10+temp;
            y=y/10;
        }
        
        return sum*flag;
    }
}