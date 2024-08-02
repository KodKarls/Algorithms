import unittest
from unittest.mock import patch

from io import StringIO

from output_handler import print_result


class TestOutputHandler(unittest.TestCase):
    @patch('sys.stdout', new_callable=StringIO)
    def test_print_result_no_message(self, mock_stdout):
        # Given
        numbers = [5, 6, 7]
        expected_output = '\n5, 6, 7, \n'

        # When
        print_result('', numbers)

        # Then
        self.assertEqual(mock_stdout.getvalue(), expected_output)

    @patch('sys.stdout', new_callable=StringIO)
    def test_print_result_empty_numbers(self, mock_stdout):
        # Given
        numbers = []
        expected_output = 'Empty:\n\n'

        # When
        print_result('Empty:', numbers)

        # Then
        self.assertEqual(mock_stdout.getvalue(), expected_output)

    @patch('sys.stdout', new_callable=StringIO)
    def test_print_result_single_number(self, mock_stdout):
        # Given
        numbers = [1]
        expected_output = 'Message:\n1, \n'

        # When
        print_result('Message:', numbers)

        # Then
        self.assertEqual(mock_stdout.getvalue(), expected_output)

    @patch('sys.stdout', new_callable=StringIO)
    def test_print_result_multiple_numbers(self, mock_stdout):
        # Given
        numbers = [1, 2, 3, 4]
        expected_output = 'Numbers:\n1, 2, 3, 4, \n'

        # When
        print_result('Numbers:', numbers)

        # Then
        self.assertEqual(mock_stdout.getvalue(), expected_output)


if __name__ == '__main__':
    unittest.main()
