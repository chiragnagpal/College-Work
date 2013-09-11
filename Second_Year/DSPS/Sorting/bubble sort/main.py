def main():
    a=[]
    for i in range(5):
        a.append(input("Enter next No."))
    print "you have entered the following nos"
    for i in range(5):
        print a[i]
        
    for i in range(5):
        for j in range(4):
            if a[j]>a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]
                
    print "after sorting using bubble sort"
    for i in range(5):
        print a[i]
             
main()
        
        