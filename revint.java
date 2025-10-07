class Solution {
    public int reverse(int x) {
       long p=x;
       long maxInt = Integer.MAX_VALUE;
       long minInt = Integer.MIN_VALUE;
       long rev=0;
       while(p!=0){
        rev=rev*10+(p%10);
        p=p/10;
        
       }
       if (rev > maxInt || rev < minInt ) {
                return 0;
        }
        return (int)rev; 
    }
}
