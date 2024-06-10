def quick_sort(array):
    if len(array) <= 1:
        return array

    pivot = array[len(array) // 2]

    less = [x for x in array if x < pivot]
    equal = [x for x in array if x == pivot]
    greater = [x for x in array if x > pivot]

    return quick_sort(less) + equal + quick_sort(greater)


if __name__ == '__main__':
    numbers = [6, 5, 5, 4, 3, 12, 12, 10, 107, 1, 15, 35, 83, 154, 2]
    print("Numbers before sorting: ")
    for number in numbers:
        print(number, end=', ')

    sorted_numbers = quick_sort(numbers)

    print("\nNumbers after sorting: ")
    for number in sorted_numbers:
        print(number, end=', ')
