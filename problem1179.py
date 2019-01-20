pairs = []
odd = []
a = 0
b = 0

for i in range(15):
    number = int(input())
    if number % 2 == 0:
        pairs.insert(a, number) 
        a += 1
        if a == 5:
            for i in range(a):
                print("par[%d] = %d" % (i, pairs[i]))
            a = 0
    else:
        odd.insert(b, number)
        b += 1
        if b == 5:
            for i in range(b):
                print("impar[%d] = %d" % (i, odd[i]))
            b = 0

for i in range(b):
    print("impar[%d] = %d" % (i, odd[i]))

for i in range(a):
    print("par[%d] = %d" % (i, pairs[i]))
        
        
