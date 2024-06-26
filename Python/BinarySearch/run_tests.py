import unittest

from tests.test_binary_search import TestBinarySearch
from tests.test_input_handler import TestInputHandler

if __name__ == '__main__':
    binary_search_suite = unittest.TestLoader().loadTestsFromTestCase(TestBinarySearch)
    input_handler_suite = unittest.TestLoader().loadTestsFromTestCase(TestInputHandler)

    all_tests = unittest.TestSuite([binary_search_suite, input_handler_suite])

    unittest.TextTestRunner(verbosity=2).run(all_tests)
