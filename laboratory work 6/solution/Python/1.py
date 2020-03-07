array=input("Введите массив: ").split(' ');
array=[int(x) for x in array];

l=int(input("Введите L: "));

k=0;
while k<len(array):
	if array[k]<=l:
		array.pop(k);
		k-=1;
	k+=1;
	
array.sort();

print('Result: ');
array=[str(x) for x in array];
print(' '.join(array));