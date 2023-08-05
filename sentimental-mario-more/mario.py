# Prompt the user for the height of the pyramid
while True:
    try:
        height = int(input("Height: "))
        if height > 0 and height <= 8:
            break
        else:
            print("Height must be a positive integer between 1 and 8.")
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

# Print the double half-pyramid
for i in range(height):
    # Print spaces on the left side
    for j in range(height - i - 1):
        print(" ", end="")

    # Print the left half of the pyramid
    for j in range(i + 1):
        print("#", end="")

    # Print the gap between the halves
    print("  ", end="")

    # Print the right half of the pyramid
    for j in range(i + 1):
        print("#", end="")

    # Move to the next line
    print()
