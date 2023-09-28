import pyautogui

def draw_pyramid(levels):
    screen_width, screen_height = pyautogui.size()
    base_length = levels * 2 - 1
    pyramid_width = base_length * 10  # Each level has 10 pixels width

    # Calculate starting position to center the pyramid on the screen
    start_x = (screen_width - pyramid_width) // 2
    start_y = screen_height - 100  # Start drawing 100 pixels from the bottom

    # Draw the pyramid
    current_x = start_x
    current_y = start_y
    for i in range(levels):
        # Draw the row for the current level
        for j in range(i * 2 + 1):
            pyautogui.click(current_x, current_y)
            current_x += 10

        # Move to the next row and adjust x coordinate for centering
        current_y -= 10
        current_x = start_x + (i + 1) * 5

# Get user input for the number of levels in the pyramid
while True:
    try:
        levels = int(input("Enter the number of levels for the pyramid: "))
        if levels <= 0:
            print("Please enter a positive number.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

# Draw the pyramid
pyautogui.PAUSE = 0.1  # Set a small pause to visualize the drawing
draw_pyramid(levels)
