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
    for r in range(len(g)):
        for c in range(len(g[r])):
            if g[r][c] == 1:
                p = p + 4
                if c != 0 and g[r][c - 1] == 1: #check item on left.
                    p = p - 1
                if c != len(g[r]) - 1 and g[r][c + 1] == 1: #check item on 
                    p = p - 1
                if r != 0 and g[r - 1][c] == 1: #check item on 
                    p = p - 1
                if r != len(g) - 1 and g[r + 1][c] == 1: #check item on 
                    p = p - 1
    return p
