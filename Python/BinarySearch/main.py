def binary_search(array, target):
    start = 0
    end = len(array) - 1

    while start <= end:
        middle = (start + end) // 2
        result = array[middle]
        if result == target:
            return middle
        elif result < target:
            start = middle + 1
        else:
            end = middle - 1

    return None


if __name__ == '__main__':
    numbers = [i for i in range(1, 10_000_000)]
    search_number = int(input('Enter the number to search: '))

    index = binary_search(numbers, search_number)

    if index is not None:
        print(f'Element {search_number} is in position number {index} on the list.')
    else:
        print(f'Element {search_number} is not on the list.')
