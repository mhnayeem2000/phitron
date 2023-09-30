class pen:
    def __init__(self,company,color,price):
        self.company = company
        self.color = color
        self.price = price
materdor_pen = pen('materdor','black',1200)
highschool_pen = pen('High School','Blue',1000)
oneplus_pen = pen('OnePlus','Green',1500)
print(materdor_pen.color,materdor_pen.price,materdor_pen.company)  
print(highschool_pen.color,highschool_pen.price,highschool_pen.company)
print(oneplus_pen.color,oneplus_pen.price,oneplus_pen.company)