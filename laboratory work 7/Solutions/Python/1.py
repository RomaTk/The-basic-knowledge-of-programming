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
	notPossible='1234567890';
	array=st.split();
	st='';
	for word in array:
		for symbol in word:
			if symbol in notPossible:
				word='';
				break;
		if len(word)>0:
			st+=word+' ';
	st=st[:-1];
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