class family:
    def __init__(self,address):
        self.address = address
class school:
    def __init__(self,id,level):
        self.id = id
        self.level = level
class sorts:
    def __init__(self,position,name):
        self.position = position
        self.name = name
class student(family,school,sorts):
    def __init__(self,address,id,level,position,name):
        super().__init__(address)
        school.__init__(self,id,level)
        sorts.__init__(self,position,name)
    def all_show(self):
        print(self.position,self.name)

sp = sorts('goal keeper','Messi')
st = student('holan','1','expert',sp.position,sp.name)
st.all_show()

        
