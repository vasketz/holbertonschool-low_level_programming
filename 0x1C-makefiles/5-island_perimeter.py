#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Solution
    """
    count1 = 0
    count2 = 0
    for width in range(len(grid)):
        for height in range(len(grid[width])):
            if grid[width][height] == 1:
                count1 += 1
                if width != 0 and grid[width - 1][height] == 1:
                    count2 += 1
                if height != 0 and grid[width][height - 1] == 1:
                    count2 += 1
    return 4 * count1 - 2 * count2
