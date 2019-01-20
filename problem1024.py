n = int(input())

while n > 0:

    initialString = input()

    i = 0
    
    intermediateString = ""
    
    while i < len(initialString):

        if (ord(initialString[i]) >=  65 and ord(initialString[i]) <= 90) or (ord(initialString[i]) >= 97 and ord(initialString[i]) <= 122):
            intermediateString += chr(ord(initialString[i]) + 3)

        else:
            intermediateString += initialString[i]

        i += 1

    intermediateString = intermediateString[::-1]

    i = 0
    
    halfString = int(len(intermediateString) / 2)

    finalString = ""

    while i < len(intermediateString):

        if (i >= halfString):
            finalString += chr(ord(intermediateString[i]) - 1)

        else:
            finalString += intermediateString[i]

        i += 1    

    print(finalString)
    
    n -= 1
