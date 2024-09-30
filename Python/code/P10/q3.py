# Write a program to read a date in the format DD/MM/YYYY and print the same date
# in MM-DD-YYYY format.

from datetime import datetime

date_str = input("Enter a date in DD/MM/YYYY format: ")

if len(date_str) == 10 and date_str[2] == '/' and date_str[5] == '/':
    date_obj = datetime.strptime(date_str, "%d/%m/%Y")
    converted_date_str = date_obj.strftime("%m-%d-%Y")
    print("Date in MM-DD-YYYY format:", converted_date_str)
else:
    print("Invalid date format. Please use DD/MM/YYYY.")

