import random

def show(matrix):
	for i in range(4):
		for j in range(5):
			print(str(matrix[i][j])+'\t',end=' ');
		print();


matrix=[];
for i in range(4):
	matrix.append([]);
	for j in range(5):
		matrix[i].append(random.randint(1,100));
		
show(matrix);

maxi,mini=0,101;
maxc,minc=0,0;
for i in range(4):
	for j in range(5):
		if maxi<matrix[i][j]:
			maxi=matrix[i][j];
			maxc=j;
		elif mini>matrix[i][j]:
			mini=matrix[i][j];
			minc=j;
	
retArr=[];
for i in range(4):
	retArr.append((matrix[i][maxc]+matrix[i][minc])/2);

print(retArr);