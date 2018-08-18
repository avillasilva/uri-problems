n = int(input(""))
while n > 0:
    x, y = input().split(" ")
    x = float(x)
    y = float(y)
    if y == 0:
        print("divisao impossivel")
    else:
        print("%.1f" %(x/y))
    n-=1
