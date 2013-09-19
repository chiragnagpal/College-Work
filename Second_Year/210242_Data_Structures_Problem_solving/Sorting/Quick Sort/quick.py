
def quick(left, right, a):
    if left==right:
        return 
    print left ,right
    b=[]
    pivot=a[left]
    print ("pivot is:"), pivot
    c=left-1
   
    for i in range(left+1,right,1):
        if a[i]<pivot:
            b.append(a[i])
            c+=1
    b.append(pivot)
    c+=1
    for i in range(left+1,right,1):
        if a[i]>=pivot:
            b.append(a[i])
            
    d=0
    for i in range(left,right,1):
        a[i]=b[d]
        d+=1
    print a
    
    quick(left,c,a)
    quick(c+1,right,a)
        
    

def main():
    a=[]
    n=input("Enter the number of digits in the array:")
    
    for i in range(n):
        a.append(input("enter the next digit:"))
    quick(0,n,a)

main()