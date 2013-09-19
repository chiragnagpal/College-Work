def main():
    a=[]
    for i in range(5):
        a.append(input("Enter next No."))
    print "you have entered the following nos"
    for i in range(5):
        print a[i]
    c=0   
    for i in range(5):
        mini = a[i]
        
        for j in range(i,5,1):
            if a[j]<mini:
                mini=a[j]
                a[j],a[i]=a[i],a[j]
        c=c+1
        print "after " , c , "passes", a  
    print "after sorting using selection sort"
    for i in range(5):
        print a[i] , 
        
        
main()          
                
            