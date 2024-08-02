def find_smallest_index(numbers):
    smallest = numbers[0]
    smallest_index = 0

    for i in range(1, len(numbers)):
        if numbers[i] < smallest:
            smallest = numbers[i]
            smallest_index = i

    return smallest_index


def selection_sort(numbers):
    result = []

    for _ in range(len(numbers)):
        smallest = find_smallest_index(numbers)
        result.append(numbers.pop(smallest))

    return result
