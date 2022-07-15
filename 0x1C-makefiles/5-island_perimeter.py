#!/usr/bin/python3
""" Module 5-island_perimeter
    Returns the perimeter of an island described in grid"""


def island_perimeter(grid):
    """ Is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100 """

    width = len(grid[0])
    height = len(grid)
    sizes = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                sizes += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (grid[i - 1][j] == 1):
                    edges += 1
    return sizes - (edges * 2)
