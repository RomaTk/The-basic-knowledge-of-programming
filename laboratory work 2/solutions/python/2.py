import math


#second
print("Введите x:");
x=float(input());
print("Введите a:");
a=float(input());
print("Введите c:");
c=float(input());

l=(math.sqrt(math.exp(x)-math.cos((x**2)*(a**5)))+math.atan(a-x**5)**4)/(math.sqrt(math.fabs(a+x*c)));
print("L=",l);

input();
