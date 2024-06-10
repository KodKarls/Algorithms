import random


def find_smallest_index(array):
    smallest = array[0]
    smallest_index = 0

    for i in range(1, len(array)):
        if array[i] < smallest:
            smallest = array[i]
            smallest_index = i

    return smallest_index


def selection_sort(array):
    result = []

    for _ in range(len(array)):
        smallest = find_smallest_index(array)
        result.append(array.pop(smallest))

    return result


if __name__ == '__main__':
    numbers = [random.randint(1, 1_000) for _ in range(1, 20)]

    print("Numbers before sorting:")
    for number in numbers:
        print(number, end=', ')

    sorted_numbers = selection_sort(numbers)

    print("\nNumbers after sorting:")
    for number in sorted_numbers:
        print(number, end=', ')
