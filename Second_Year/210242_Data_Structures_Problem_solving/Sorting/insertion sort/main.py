def main():
    a=[]
    n=input("enter no. of elements in array")
    for i in range(n):
        a.append(input("Enter next No."))
    print "you have entered the following nos:\n "
    print a
    
    for i in range(n):
        for j in range(i):
            if a[i]<a[j]:
               temp=a[i]
               for k in range(i-1,j-1,-1):
                   a[k+1],a[k]=a[k],a[k+1]
               a[j]=temp
        print "after",i+1,"passes",  a
main()
