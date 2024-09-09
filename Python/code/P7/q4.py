# Write a program that is given a dictionary
# containing the average daily temperature for each
# day  of  the  week,  and  prints  all  the  days  on  which
# the  average  temperature  was  between  40  and  50
# degrees.

temperature = {
    "Mon": 45,
    "Tue": 48,
    "Wed": 32,
    "Thu": 45,
    "Fri": 35,
    "Sat": 41,
    "Sun": 40,
}

sum = 0

for key,value in temperature.items():
    sum += value
    
    if (value >= 40) and (value <= 50):
        print(key)

avg = sum / 7
print("Average of temperature is: ", avg)