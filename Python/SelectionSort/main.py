from numbers_data import get_numbers_data
from output_handler import print_result
from selection_sort import selection_sort

if __name__ == '__main__':
    numbers = get_numbers_data()

    print_result("Numbers before sorting:", numbers)

    sorted_numbers = selection_sort(numbers)

    print_result("Numbers after sorting:", sorted_numbers)
