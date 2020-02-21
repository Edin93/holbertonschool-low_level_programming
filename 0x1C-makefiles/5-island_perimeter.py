#!/usr/bin/python3
"""
This module contains the island_perimeter function that returns the perimiter
of the island described in the grid parameter of the function.
"""


def island_perimeter(grid):
    """
    island_perimeter - calculates the perimiter of the island
    described in the given grid argument.

    Parameters:
    grid (list): list of list of int describing the island to calculate.
    """
    p = 0
    g = grid
    for ri in range(len(g)):
        for ci in range(len(g[ri])):
            if g[ri][ci] == 1:
                p += 4
                if g[ri][ci - 1] != len(g[ri]) - 1 and g[ri][ci + 1] == 1:
                    p -= 1
                if g[ri][ci] != 0 and g[ri][ci - 1] == 1:
                    p -= 1
                pr = ri - 1
                if g[ri] != 0 and g[pr][ci] == 1:
                    p -= 1
                nr = ri + 1
                if ri != len(g) - 1 and g[nr][ci] == 1:
                    p -= 1
    return p
