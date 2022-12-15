#!/usr/bin/python3
def print_last_digit(number):
    digit = number % 10
    if number < 0:
        digit = (number * -1) % 10
    print("{:d}".format(digit), end="")
    return digit
