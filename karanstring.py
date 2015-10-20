a=input()
while a>0:
	s=raw_input()
	k=s[0]
	j=[]
	j.append(k)
	for i in range(1,len(s)):
		if s[i]==k:
			k=s[i]
		else:
			j.append(s[i])
			k=s[i]
	print "".join(j)
	a=a-1
