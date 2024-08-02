import unittest

from selection_sort import find_smallest_index, selection_sort


class TestSelectionSort(unittest.TestCase):
    def test_find_smallest_index_single_number(self):
        # When
        numbers = [1]
        expected_result = 0

        # When
        result = find_smallest_index(numbers)

        # Then
        self.assertEqual(result, expected_result)

    def test_find_smallest_index_multiple_numbers(self):
        # When
        numbers = [10, 20, 5, 15]
        expected_result = 2

        # When
        result = find_smallest_index(numbers)

        # Then
        self.assertEqual(result, expected_result)

    def test_find_smallest_index_all_numbers_the_same(self):
        # When
        numbers = [2, 2, 2, 2]
        expected_result = 0

        # When
        result = find_smallest_index(numbers)

        # Then
        self.assertEqual(result, expected_result)

    def test_selection_sort_single_number(self):
        # When
        numbers = [5]
        expected_result = [5]

        # When
        result = selection_sort(numbers)

        # Then
        self.assertEqual(result, expected_result)

    def test_selection_sort_multiple_numbers(self):
        # When
        numbers = [10, 20, 5, 15]
        expected_result = [5, 10, 15, 20]

        # When
        result = selection_sort(numbers)

        # Then
        self.assertEqual(result, expected_result)

    def test_selection_sort_already_sorted_numbers(self):
        # When
        numbers = [1, 2, 3, 4, 5]
        expected_result = [1, 2, 3, 4, 5]

        # When
        result = selection_sort(numbers)

        # Then
        self.assertEqual(result, expected_result)

    def test_selection_sort_reverse_sorted_numbers(self):
        # When
        numbers = [5, 4, 3, 2, 1]
        expected_result = [1, 2, 3, 4, 5]

        # When
        result = selection_sort(numbers)

        # Then
        self.assertEqual(result, expected_result)


if __name__ == '__main__':
    unittest.main()
