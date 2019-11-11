import math

print("Введите три значения:");

a1=float(input());
b1=float(input());
c1=float(input());

a=math.fabs(a1);
b=math.fabs(b1);
c=math.fabs(c1);
    
a2=(((a>b)and(a<c))or((a<b)and(a>c)));
b2=(((b>a)and(b<c))or((b<a)and(b>c)))*2;
c2=(((c>a)and(c<b))or((c<a)and(c>b)))*3;
    
    
sw=a2+b2+c2;
    
if (sw==1):
	print(a1);
elif (sw==2):
	print(b1);
elif (sw==3):
	print(c1);
else:
	print("есть два одинаковых числа");