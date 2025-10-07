bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    long temp,rev,a;
    rev = 0;
    temp=x;

    while (temp>0) {
        a=temp%10;
        rev=rev*10+a;
        temp=temp/10;
    }

    return (x==rev);
}
