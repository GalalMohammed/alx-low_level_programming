#!/usr/bin/python3
# -*- coding: utf-8 -*-
""" island perimeter
"""


def island_perimeter(grid):
    """
    gets perimeter of the island described in grid.
    """
    peri = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if not (0 < i and grid[i - 1][j] == 1):
                    peri += 1
                if not (i < len(grid) - 1 and grid[i + 1][j] == 1):
                    peri += 1
                if not (0 < j and grid[i][j - 1] == 1):
                    peri += 1
                if not (j < len(grid[i]) - 1 and grid[i][j + 1] == 1):
                    peri += 1
    return peri
