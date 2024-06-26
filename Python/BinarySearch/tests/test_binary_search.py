import unittest

from binary_search import binary_search


class TestBinarySearch(unittest.TestCase):
    def test_element_found(self):
        # Given
        numbers = [12, 15, 17, 20, 24, 27, 31, 38, 42, 49, 55, 58, 63, 68, 76, 79, 84, 87, 93, 95]
        target = 42
        expected_index = 8

        # When
        result_index = binary_search(numbers, target)

        # Then
        self.assertEqual(result_index, expected_index)

    def test_element_not_found(self):
        # Given
        numbers = [12, 15, 17, 20, 24, 27, 31, 38, 42, 49, 55, 58, 63, 68, 76, 79, 84, 87, 93, 95]
        target = 39
        expected_index = None

        # When
        result_index = binary_search(numbers, target)

        # Then
        self.assertEqual(result_index, expected_index)

    def test_empty_data(self):
        # Given
        numbers = []
        target = 5
        expected_index = None

        # When
        result_index = binary_search(numbers, target)

        # Then
        self.assertEqual(result_index, expected_index)

    def test_single_element_data(self):
        # Given
        numbers = [7]
        target = 7
        expected_index = 0

        # When
        result_index = binary_search(numbers, target)

        # Then
        self.assertEqual(result_index, expected_index)

    def test_element_at_beginning(self):
        # Given
        numbers = [12, 15, 17, 20, 24, 27, 31, 38, 42, 49, 55, 58, 63, 68, 76, 79, 84, 87, 93, 95]
        target = 12
        expected_index = 0

        # When
        result_index = binary_search(numbers, target)

        # Then
        self.assertEqual(result_index, expected_index)

    def test_element_at_end(self):
        # Given
        numbers = [12, 15, 17, 20, 24, 27, 31, 38, 42, 49, 55, 58, 63, 68, 76, 79, 84, 87, 93, 95]
        target = 95
        expected_index = 19

        # When
        result_index = binary_search(numbers, target)

        # Then
        self.assertEqual(result_index, expected_index)


if __name__ == '__main__':
    unittest.main()
