n=int(input("enter the no"))
list=[]
for i in range(1,n+1):
    if n%i==0:
        list.append(i)
print(list)
