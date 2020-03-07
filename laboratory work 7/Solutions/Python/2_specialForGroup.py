def keyByLen(value):
	return len(value);
def inputText():
	text=[];
	while True:
		st=input();
		if st=='':
			break;
		text.append(st);
	return text;
def taskByString(st):
	array=st.split();
	array.sort(key=keyByLen,reverse=True);
	st=' '.join(array);
	return st;

def mainTask(text):
	array=list(map(taskByString,text));
	return array;

text=inputText();
print('Inputed Text\n');
print('\n'.join(text));
print('\n\n');
print('Result Text\n');
print('\n'.join(mainTask(text)));