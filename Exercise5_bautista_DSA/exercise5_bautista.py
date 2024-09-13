from array import array

a = array('i', [4, 5, 6, 7])
a.insert(1,2)
print(a)
a.insert(-1, 0)
print(a)
a.insert(10,-1)
print(a)
