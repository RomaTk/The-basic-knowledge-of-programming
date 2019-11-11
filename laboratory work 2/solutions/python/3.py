import math

#third
print("Введите x:");
x=float(input());

v27=(math.log(math.sqrt(math.fabs(x))+x**2+math.sin(math.fabs(x)))**2)/(math.log2(math.exp(math.sqrt(x))+x**4)**2);
print("v27=",v27);

input();