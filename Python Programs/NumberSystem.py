p=int(input("CONVERT DECIMAL INTO-\n1.Binary\n2.Octanary\n3.Hexanary\n4.All\n"))
x=int(input('The deciaml number is '))
def bin():
	print("The binary of ",x," is '",bin(x),"'")
def oct():
	print("The octanary of ",x," is '",oct(x),"'")
def hex():
	print("The hexanary of ",x," is '",hex(x),"'")
if p==1:bin()
elif p==2:oct()
elif p==3:hex()
elif p==4:
	bin()
	oct()
	hex()
else:
	print("Invalid choice !!!")