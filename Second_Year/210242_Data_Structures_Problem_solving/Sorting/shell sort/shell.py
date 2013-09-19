
def main():
    a=[]
    n = input("enter the number of integers in the array")
    
    for i in range(n):
        a.append(input("enter next no."))
     
    print "the array is:", a

    incr=n/3
    while (incr>=1):
            b=[]
            print incr
            for i in range(0,incr,1):
               for j in range (i,n,incr):
                   for k in range (j,n,incr):
                      small=a[j]
                      if a[k]<small:
                          a[j],a[k]=a[k],a[j]
            print a
           
            if (incr==1):
                incr=0
            else:
                incr = (incr/3+1)
          
            
main()