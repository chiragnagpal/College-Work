def main():
    buck=[]
    a=[]
    g=input("enter length of array")
    for i in range(g):
        a.append(input("Enter next No."))
    print "you have entered the following nos"
    print a
    large=0;
    for i in range(g):
        if a[i]>large:
            large=a[i]
    print "largest no is ",large
    num=0
    while(large>0):
        large=large/10
        num+=1    
    print "the length of largest no. is", num
 
    for m in range(num):
        buck=[0 for i in range(10)]
        bucket=[[0 for i in range(10)]for j in range(g+1)]
        for i in range(g):
            k=(a[i]/(10**m))%10
            print a[i],k
            bucket[buck[k]][k]=a[i]
            buck[k]+=1
        
        a=[]
        for i in range(10):
            for j in range(buck[i]):
                  
                  a.append(bucket[j][i])
        print "after sorting", a

main()