class Star_Cinema:
    __hall_list = []

    def entry_hall(self, hall):
        self.__hall_list.append(hall)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        self.entry_hall(self)

    def entry_show(self, id, movie_name, time):
        show_info = (id, movie_name, time)
        self.__show_list.append(show_info)
        self.__seats[id] = []
        for i in range(self.__rows):
            row = []
            for j in range(self.__cols):
                row.append(0)
            self.__seats[id].append(row)

    def book_seats(self, id, seat_list):
        for seat in seat_list:
            row, col = seat
            if 0 <= row < self.__rows and 0 <= col < self.__cols:
                if self.__seats[id][row][col] == 0:
                    self.__seats[id][row][col] = 1
                else:
                    print(f"Seat at row {row} and column {col} is already booked.")
            else:
                print("Invalid seat selection at row {} and column {}.".format(row, col))

    def view_show_list(self):
        for s in self.__show_list:
            print(s)

    def view_available_seats(self, id):
        return self.__seats[id]


print("===================Welcome To our Cinema Hall==================\n")
rows = int(input("Enter the number of rows for the hall: "))
cols = int(input("Enter the number of columns for the hall: "))
hall_no = input("Enter the hall number: ")

hall1 = Hall(rows=rows, cols=cols, hall_no=hall_no)

while True:
    print("\nOptions:")
    print("1. Entry of a Show")
    print("2. View Show List")
    print("3. View Available Seats")
    print("4. Book Seats")
    print("5. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        show_id = input("Enter the show ID: ")
        movie_name = input("Enter the movie name: ")
        show_time = input("Enter the show time: ")
        hall1.entry_show(id=show_id, movie_name=movie_name, time=show_time)
    elif choice == 2:
        print("Show list:")
        hall1.view_show_list()
    elif choice == 3:
        show_id = input("Enter the show ID: ")
        print(f"Available seats for show {show_id}:")
        print(hall1.view_available_seats(show_id))
    elif choice == 4:
        show_id = input("Enter the show ID: ")
        num_seats = int(input("Enter the number of seats to book: "))
        seat_list = []
        for _ in range(num_seats):
            seat_row = int(input("Enter the row for seat: "))
            seat_col = int(input("Enter the column for seat: "))
            seat_list.append((seat_row, seat_col))
        hall1.book_seats(show_id, seat_list)
        print("Seats booked successfully.")
    elif choice == 5:
        break
    else:
        print("Invalid choice. Please try again.")
