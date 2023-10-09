class Star_Cinema:
    hall_list = []
    def entry_hall(self):
        self.hall_list.append(p_hall)

class Hall(Star_Cinema):
    def __init__(self,rows,cols,hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        self.entry_hall(self)

p_hall = Hall(7,7,100)