import math

STEP=0.2
START=-2
END=5

toContinueString='+';
while toContinueString!='-':
	if toContinueString=="+":
		print("---------------------------------------------------------");
		print("|"+" "*26+"y|"+" "*26+"x|");
		print("---------------------------------------------------------");
		i=START
		while i<=END:
			iString=str(i);
			number=str(math.tan(i / 3) * math.sin(i - 1.2));
			print("|"+" "*(27-len(number))+number+"|"+" "*(27-len(iString))+iString+"|");
			print("---------------------------------------------------------");
			i+=STEP;
		print();
		print();
		
		print("---------------------------------------------------------");
		print("|"+" "*26+"y|"+" "*26+"x|");
		print("---------------------------------------------------------");
		i=START
		while i<=END:
			iString=str(i);
			number=str(math.sin(i) / math.log(i + 4));
			print("|"+" "*(27-len(number))+number+"|"+" "*(27-len(iString))+iString+"|");
			print("---------------------------------------------------------");
			i+=STEP;
	toContinueString=input("type '+' to repeat or '-' to exit: ");
