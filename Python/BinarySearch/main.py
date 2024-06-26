from binary_search import binary_search
from input_handler import get_number_input


if __name__ == '__main__':
    numbers = [12, 15, 17, 20, 24, 27, 31, 38, 42, 49, 55, 58, 63, 68, 76, 79, 84, 87, 93, 95]
    search_number = get_number_input('Enter the number to search: ')

    index = binary_search(numbers, search_number)

    if index is not None:
        print(f'Element {search_number} is in position number {index} on the list.')
    else:
        print(f'Element {search_number} is not on the list.')
