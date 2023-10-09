class Star_Cinema:
    __hall_list = []

    @classmethod
    def entry_hall(cls, hall):
        cls.__hall_list.append(hall)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        self.entry_hall(self)

    def entry_show(self, id, movie_name, time):
        start = 0
        show_info = (id, movie_name, time)
        self.__show_list.append(show_info)
        self.__seats[id] = [[start for _ in range(self.__cols)] for _ in range(self.__rows)]

    def book_seats(self, id, seat_list):
        if id not in self.__seats:
            raise ValueError("Invalid show ID.")

        for seat in seat_list:
            row, col = seat
            if row < 0 or row >= self.__rows or col < 0 or col >= self.__cols:
                raise ValueError("Invalid seat selection.")

            if self.__seats[id][row][col] == 1:
                raise ValueError("Seat already booked.")

            self.__seats[id][row][col] = 1

    def view_show_list(self):
        return self.__show_list

    def view_available_seats(self, id):
        if id not in self.__seats:
            raise ValueError("Invalid show ID.")

        return self.__seats[id]


if __name__ == "__main__":
    # Get hall details from the user
    rows = int(input("Enter the number of rows for the hall: "))
    cols = int(input("Enter the number of columns for the hall: "))
    hall_no = input("Enter the hall number: ")

    # Create a hall
    hall1 = Hall(rows=rows, cols=cols, hall_no=hall_no)

    # Get show information from the user
    show_id = input("Enter the show ID: ")
    movie_name = input("Enter the movie name: ")
    show_time = input("Enter the show time: ")

    # Entry of a show
    hall1.entry_show(id=show_id, movie_name=movie_name, time=show_time)

    # View show list
    print("Show list for hall {}:".format(hall_no))
    print(hall1.view_show_list())

    # Get seat booking information from the user
    try:
        num_seats = int(input("Enter the number of seats to book: "))
        seat_list = []
        for _ in range(num_seats):
            seat_row = int(input("Enter the row for seat: "))
            seat_col = int(input("Enter the column for seat: "))
            seat_list.append((seat_row, seat_col))

        # Book seats for a show
        hall1.book_seats(show_id, seat_list)
        print("Seats booked successfully.")
    except ValueError as e:
        print("Error:", str(e))

    # View available seats for a show
    try:
        print("Available seats for show {}:".format(show_id))
        print(hall1.view_available_seats(show_id))
    except ValueError as e:
        print("Error:", str(e))
