coins=0
n=17
while(n>0):
    if n>=10:
        coins=coins+n//10
        n=n%10
    elif n>=5:
        coins=coins+n//5
        n=n%5
    elif n>=2:
        coins=coins+n//2
        n=n%2
    elif n>0:
        coins=coins+n//1
        n=n%1
           
print(coins)
