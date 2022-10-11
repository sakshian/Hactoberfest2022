def linear_search(list1,n,key):
    for i in range(0,n):
        if(list1[i]==key):
            return i
    return -1



#binary search
def binary_search(list1,key):
    low=0
    high=len(list1)-1
    while low<=high:
        mid=(low+high)//2
        if key==list1[mid]:
           return mid
        elif key>list1[mid]:
           low=mid+1
        else:
           high=mid-1    
    return 0

#sentinal search
def sentinal_search(list1,n,key):
    last=list1[n-1]
    list1[n-1] =key
    i=0
    while(list1[i]!=key):
        i+=1
    list1[n-1]=last
    if((i<n-1) or (list1[n-1]==key)):
        return i
    else:
        return -1 

list1=[]
n=int(input("enter the no of elements in list:"))
for i in range(0,n):
    a=int(input("enter the elements"))
    list1.append(a)
    list1.sort()
print(list1)
key=int(input("enter the key:"))
res=sentinal_search(list1,n,key)
if(res==-1):
    print("element not found")
else:
    print("element found at index:",res)           


