# https://www.hackerrank.com/challenges/strong-password/problem

import math
import os
import random
import re
import sys


def minimumNumber(n, password):
    numbers = list("0123456789")
    lower_case = list("abcdefghijklmnopqrstuvwxyz")
    upper_case = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    special_characters = list("!@#$%^&*()-+")
    numbers.sort()
    lower_case.sort()
    upper_case.sort()
    special_characters.sort()
    password = list(password)
    password.sort()
    res = 0
    status = 0
    if len(set(password).intersection(set(numbers))) >= 1:
        res = res + 1
    else:
        status += 1
    if len(set(password).intersection(set(lower_case))) >= 1:
        res += 1
    else:
        status += 1
    if len(set(password).intersection(set(upper_case))) >= 1:
        res += 1
    else:
        status += 1
    if len(set(password).intersection(set(special_characters))) >= 1:
        res += 1
    else:
        status += 1
    suggestion = 0
    if n + status >= 6:
        suggestion = status
    else:
        suggestion = status+(6-(n+status))

    return (suggestion)


if __name__ == "__main__":
    print(minimumNumber(2, "+0"))

   
