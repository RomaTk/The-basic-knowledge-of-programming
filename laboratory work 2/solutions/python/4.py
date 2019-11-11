import math

a=7;
b=2.3;
print("Введите b");
b=float(input());

x=math.sqrt(a)+math.sqrt(b);
p=math.sqrt(x**2+a**2);
y=math.atan(math.fabs(p))**3;

print('y=',y);
print('p=',p);
print('x=',x);

input();