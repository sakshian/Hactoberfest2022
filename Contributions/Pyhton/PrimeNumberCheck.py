def addDigits(n:int):
    lst = list(str(n))
    lst = [int(i) for i in lst]
    addition = sum(lst)
    print(addition)

a = int(input("Insert a number to add get the sum of the digits: "))
addDigits(a)