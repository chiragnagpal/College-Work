def main():
    print("hey there!!!")
    f = open('textfile','r')    
    print(f)
    i=1
    v=0
    s=0
    sc=0
    wflag=0
    w=1
    print "Data for the file is:"
    while(f.read(1)!=""):
        f.seek(i)
        
        c= ord(f.read(1))
        
        if c == 65 or c == 97 or c == 69 or c == 101 or c == 73 or c == 105 or c == 79 or c == 111 or c == 85 or c == 117:
            v+=1
        
        if (c==32):  
            s+=1    
            wflag=1  
        else:
            if wflag==1:
                w+=1
            wflag=0
            
            if (c<=64 and c>=33):
                sc+=1    
    
        i+=1
    
    print "Total Characters:", i-s-1
    print "Total Spaces:", s
    print "Number of vowels:" , v
    print "Special Characters:", sc
    print "No. of Words:", w

    f.close()
    
main()