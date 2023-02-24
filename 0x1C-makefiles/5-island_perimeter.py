#!/usr/bin/python3
"""This module contains functions that calculate the perimeter of the island"""


def land_is_here(grid, i, j, grid_length, inner_length):
    """_summary_

    Args:
        grid (list of lists): Island grid
        i (int): Index of array in grid
        j (_type_): index of water or land zone in list
        grid_length (_type_): length of the whole grid
        inner_length (_type_): length of a list in the grid

    Returns:
        int: Returns the perimeter of a land zone
    """
    perimeter_of_cell = 0
    if i != 0 and grid[i - 1][j] == 0:
        # top
        perimeter_of_cell += 1
    if i != grid_length - 1 and grid[i + 1][j] == 0:
        # bottom
        perimeter_of_cell += 1
    if j != 0 and grid[i][j - 1] == 0:
        # left
        perimeter_of_cell += 1
    if j != inner_length - 1 and grid[i][j + 1] == 0:
        # right
        perimeter_of_cell += 1
    return perimeter_of_cell


def island_perimeter(grid):
    """_summary_

    Args:
        grid (list of lists): Island grid

    Returns:
        int: Returns the perimeter of the island
    """
    perimeter = 0
    grid_length = len(grid)
    for i in range(0, grid_length):
        grid_i_length = len(grid[i])
        for j in range(0, grid_i_length):
            if grid[i][j]:
                perimeter += land_is_here(
                    grid, i, j, grid_length, grid_i_length
                )
    return perimeter
