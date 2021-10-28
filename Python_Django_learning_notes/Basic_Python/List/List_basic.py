countries = ["India", "Africa", "UK", "USA"]

print(countries)  # this will print whole list ["India", "Africa", "UK", "USA"]
print(countries[0])  # this will print India
print(countries[1])  # this will print Africa
print(countries[2])  # this will print UK
print(countries[3])  # this will print USA

print(countries[0][0])  # this will print only I, same as 2D array
print(countries[0][4])  # this will print a
print(countries[3][1])  # this will print S of USA

''' When we need to get elements of list, from index 2 to last '''
# print(countries[1:])  # this will print ['Africa', 'UK', 'USA'], index 1 to last

countries = ["India", "Africa", "UK", "USA", "Brazil"]
''' When we need list elements from index 1 to 3 '''
print(countries[1:4])  # this will print ['Africa', 'UK', 'USA']

print(type(countries))  # prints <class 'list'>


name = "Koushik"
print(type(name))  # this prints <class str>
roll = 16
print(type(roll))  # this prints <class int>

""" Updating the list element """
countries = ["India", "Africa", "UK", "USA", "Brazil"]
countries[2] = "Canada"
# this will print ['India', 'Africa', 'Canada', 'USA', 'Brazil']
print(countries)


""" Accesing list from the last """
countries = ["India", "Africa", "UK", "USA", "Brazil"]
print(countries[-1])  # this will print Brazil
print(countries[-2])  # this will print USA

""" Calculate the length """
print(len(countries))  # this will print 5


""" Another way to define list using list() func """
countries = list(('India', 12, False))
print(countries)  # it prints ['India', 12, False]
