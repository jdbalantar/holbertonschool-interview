#!/usr/bin/python3

"""
method that calculates the fewest number of operations needed to result in exactly n H characters in the file.
"""


def minOperations(n):
    """
    returns min operations to get n Hs
    """
    result = 0
    index = 2
    if n < 2:
        return 0
    while (index < n + 1):
        while n % index == 0:
            result += index
            n /= index
        index += 1
    return result
