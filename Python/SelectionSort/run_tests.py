import unittest

from tests.test_output_handler import TestOutputHandler
from tests.test_selection_sort import TestSelectionSort

if __name__ == '__main__':
    output_handler = unittest.TestLoader().loadTestsFromTestCase(TestOutputHandler)
    selection_sort = unittest.TestLoader().loadTestsFromTestCase(TestSelectionSort)

    all_tests = unittest.TestSuite([output_handler, selection_sort])

    unittest.TextTestRunner(verbosity=2).run(all_tests)
