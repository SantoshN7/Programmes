def fib(n):
    a,b=0,1
    list=[]
    while a < n:
        list.append(a)
        a,b=b,a+b

    return list