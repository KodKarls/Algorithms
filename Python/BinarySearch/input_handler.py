def get_number_input(prompt):
    while True:
        try:
            user_input = int(input(prompt))
            return user_input
        except ValueError:
            print('Invalid input. Please enter a valid integer number.')
