# Many companies pay time-and-a-half for any hours
# worked  above  40  hours  in  a  given  week.  Write  a
# program to input the number of hours worked and
# hourly  rate  and  calculate  the  total  wages for the week


no_hours = int(input("Enter the number of hours worked: "))
rate = int(input("Enter the hourly rate: "))

if no_hours <= 40:
    wages = no_hours * rate
elif no_hours > 40:
    wages = (40 * rate) + ((no_hours - 40) * rate * 1.5)
    
print(wages)