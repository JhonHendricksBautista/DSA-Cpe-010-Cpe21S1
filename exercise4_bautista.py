# list of strings
adjective = ["loving", "cute", "tall"]
animals = ["cat","dog", "fish"]
adjective.reverse()# reverse module
animals.reverse()
for x in adjective:
    for y in animals:
        print(x[::-1], y[::-1])#start printing at the end of the string