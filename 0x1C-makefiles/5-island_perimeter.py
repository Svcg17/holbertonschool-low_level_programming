#!/usr/bin/python3
"""
The 5-island_perimeter method
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
"""
    counter = 0

    height = len(grid) - 1
    for r in grid:
        width = len(r) - 1

    for i, row in enumerate(grid):
        for j, num in enumerate(row):
            if num == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    counter = counter + 1
                if i == height or grid[i + 1][j] != 1:
                    counter = counter + 1
                if j == 0 or grid[i][j - 1] != 1:
                    counter = counter + 1
                if j == width or grid[i][j + 1] != 1:
                    counter = counter + 1
    return counter
