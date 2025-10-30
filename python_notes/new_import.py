# VL tabulate
import tabulate 

data = [["Bruce Wayne", "Batman", 35864615], ["Oliver Queen", "Green Arrow", 543514684], ["Clark Kent", "Reporter", 654], ["Barry Allen", "CSI", 1], ["John Smith", "Unemployed", 32]]

print(tabulate(data, headers=["Name", "job", "number"]))
