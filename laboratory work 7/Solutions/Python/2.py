def keyByLen(value):
	return len(value);
def inputText():
	text='';
	while True:
		st=input();
		if st=='':
			break;
		text+=st+'\n';
	text=text[:-1];
	return text;
def taskByString(st):
	array=st.split();
	array.sort(key=keyByLen,reverse=True);
	st=' '.join(array);
	return st;

def mainTask(text):
	array=text.split('\n');
	array=list(map(taskByString,array));
	return '\n'.join(array);

text=inputText();
print('Inputed Text\n');
print(text);
print('\n\n');
text=mainTask(text);
print('Result Text\n');
print(text);