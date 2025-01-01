import csv

name = input("Enter name: ")
place = input("Enter place: ")

with open("students.csv", "a") as csvfile:
    writer = csv.DictWriter(csvfile, fieldnames=["name", "place"])
    writer.writerow({"name" : name, "place" : place})