
# from cs50 import get_string , get_int
# name = get_string("enter your name: ")
# age = get_int("enter your age: ")
# print(f"hello, {name} how are you\nyour age is: {age}")


import csv

phoneBook = {}

name = input("name: ")
number = input("number: ")

file = open("book.csv" , "a")

csv.writer(file).writerow([name , number])

file.close()