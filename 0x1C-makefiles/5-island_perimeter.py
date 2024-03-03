#!/usr/bin/python3
"""
   Calculates the perimeter of an island represented by square with value 1
   and side length 1 in a list matrix
   The squares can only be connected horizontally or vertically
"""


def get_perimeter(grid):
    """
       returns the perimeter of connected square cells with value 1
       and side length 1 representing a square in a list
    """
    perimeter = 0
    if len(grid) > 1:
        for j in range(len(grid)):
            if j != len(grid)-1:
                if grid[j] == 0 and grid[j+1] == 1:
                    perimeter += 1
                if grid[j-1] == 0 and grid[j] == 1:
                    perimeter += 1
    return perimeter


def island_perimeter(grid):
    """
        Calculates the perimeter of connected cells with value 1 and
        side length of 1 in a list matrix
    """
    perimeter = 0
    for row in grid:
        perimeter += get_perimeter(row)

    transposed_matrix = list(zip(*grid))
    new_list = [elem for row in transposed_matrix for elem in row]
    perimeter2 = get_perimeter(new_list)
    return perimeter + perimeter2
