# Write a program to print the dates of all the Sundays in a given year.
import calendar


year = int(input("Enter a year: "))

for month in range(1, 13):
    month_calendar = calendar.monthcalendar(year, month)
    for week in month_calendar:
        if week[6] != 0:
            print(f"{year}-{month}-{week[6]}")
