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
