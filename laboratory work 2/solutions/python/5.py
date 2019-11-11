import math

print('введите n');
n=float(input());
print('введите a');
a=float(input());

R=a/(2*math.sin(math.pi/n));
r=a/math.tan(math.pi/n);
print("R=",R);
print("r=",r);

input();