class calculator:
    def add(self,num1,num2):
        sum = int(num1) + int(num2)
        return sum
    def sub(self,num1,num2):
        subb = int(num1) - int(num2)
        return subb
    def divide(self,num1,num2):
        divmod = int(num1)/ int(num2)
        return divmod
    def multiply(self,num1,num2):
        mul =  int(num1)* int(num2)
        return mul   
my_cal = calculator()
num1 = int(input())
num2 = int(input())
print(my_cal.add(num1,num2))  
print(my_cal.sub(num1,num2))
print(my_cal.divide(num1,num2))
print(my_cal.multiply(num1,num2))  