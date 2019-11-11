import math

#first
h=float(input("Введите h:"));
y=float(input("Введите y:"));

t=(0.355*(h**2)-4.355)/(math.exp(y+h)+math.sqrt(2.7*y));
print("T=",t);

input();