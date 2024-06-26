import unittest
from unittest.mock import patch

from io import StringIO

from input_handler import get_number_input


class TestInputHandler(unittest.TestCase):
    @patch('builtins.input', side_effect=['42'])
    def test_valid_integer_input(self, mock_input):
        # Given
        prompt = 'Enter the number to search: '

        # When
        result = get_number_input(prompt)

        # Then
        mock_input.assert_called_once_with(prompt)
        self.assertEqual(result, 42)

    @patch('builtins.input', side_effect=['abc', '42'])
    @patch('sys.stdout', new_callable=StringIO)
    def test_invalid_input_then_valid(self, mock_stdout, mock_input):
        # Given
        prompt = 'Enter the number to search: '
        expected_output = 'Invalid input. Please enter a valid integer number.\n'

        # When
        result = get_number_input(prompt)

        # Then
        mock_input.assert_called_with(prompt)
        self.assertEqual(mock_input.call_count, 2)
        self.assertEqual(mock_stdout.getvalue(), expected_output)
        self.assertEqual(result, 42)

    @patch('builtins.input', side_effect=['3.14', '42'])
    @patch('sys.stdout', new_callable=StringIO)
    def test_float_input_then_valid(self, mock_stdout, mock_input):
        # Given
        prompt = 'Enter the number to search: '
        expected_output = 'Invalid input. Please enter a valid integer number.\n'

        # When
        result = get_number_input(prompt)

        # Then
        mock_input.assert_called_with(prompt)
        self.assertEqual(mock_input.call_count, 2)
        self.assertEqual(mock_stdout.getvalue(), expected_output)
        self.assertEqual(result, 42)

    @patch('builtins.input', side_effect=['', '42'])
    @patch('sys.stdout', new_callable=StringIO)
    def test_empty_input_then_valid(self, mock_stdout, mock_input):
        # Given
        prompt = 'Enter the number to search: '
        expected_output = 'Invalid input. Please enter a valid integer number.\n'

        # When
        result = get_number_input(prompt)

        # Then
        mock_input.assert_called_with(prompt)
        self.assertEqual(mock_input.call_count, 2)
        self.assertEqual(mock_stdout.getvalue(), expected_output)
        self.assertEqual(result, 42)

    @patch('builtins.input', side_effect=KeyboardInterrupt)
    def test_keyboard_interrupt(self, mock_input):
        # Given
        prompt = 'Enter the number to search: '

        # When / Then
        with self.assertRaises(KeyboardInterrupt):
            get_number_input(prompt)

        mock_input.assert_called_once_with(prompt)


if __name__ == '__main__':
    unittest.main()
