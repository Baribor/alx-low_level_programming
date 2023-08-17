#!/usr/bin/python3

def find_palindrome():
	highest = 0
	for i in range(999, 99, -1):
		for j in range(999, 99, -1):
			res = str(i*j)
			if res == res[::-1] and i*j > highest:
				highest = i * j
	print(highest, end="")

if __name__ == '__main__':
    find_palindrome()