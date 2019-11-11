toContinueString='+';
while toContinueString!='-':
	if toContinueString=="+":
		x=0;
		sum=0;
		n=0;
		x=float(input("input x: "));
		n=int(input("input n: "));
		for i in range(1,n+1,1):
			value=x**i;
			sum += value;
			print(str(x)+"^"+str(i)+"= "+str(value));
		print("sum= "+str(sum));
	toContinueString=input("type '+' to repeat or '-' to exit: ");