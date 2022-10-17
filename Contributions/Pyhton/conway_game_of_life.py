# Conway's game of life

# Description:
"""Conway’s Game of Life is an example of cellular automata: a set of rules
governing the behavior of a field made up of discrete cells. In practice, it
creates a pretty animation to look at. You can draw out each step on
graph paper, using the squares as cells. A filled-in square will be “alive”
and an empty square will be “dead.” If a living square has two or three
living neighbors, it continues to live on the next step. If a dead square has
exactly three living neighbors, it comes alive on the next step. Every other
square dies or remains dead on the next step."""

"""Even though the rules are simple, there are many surprising behaviors
that emerge. Patterns in Conway’s Game of Life can move, self-replicate,
or even mimic CPUs."""

import random, time, copy
width = 60
height = 20

#Create a list of list for the cells:
nextCells = []
for x in range(width):
    column = [] #Create a new column.
    for y in range(height):
        if random.randint(0, 1) == 0:
            column.append('#') # Add a living cell.
        else:
            column.append(' ') #Add a dead cell.
    nextCells.append(column) # nextCells is a list of column lists.

while True: #Main program loop.
    print('\n\n\n\n\n') # Seperate each step wih newlines.
    currentCells = copy.deepcopy(nextCells)

    #Print currentCells on the screen:
    for y in range(height):
        for x in range(width):
            print(currentCells[x][y], end='') # Print the # or space.
        print() # Print a newline at the end of the row.

# Calculate the next step's cells based on current step's cells:
for x in range(width):
    for y in range(height):
        # Get neighbouring coordinates:
        # % width ensures leftCoord is always between 0 and width - 1
        leftCoord = (x-1)%width
        rightCoord = (x + 1)%width
        aboveCoord = (y-1)%height
        belowCoord = (y+1)%height
        #Count number of living neighbours:
        numNeighbours = 0
        if currentCells[leftCoord][aboveCoord] == '#':
            numneighbours += 1 # Top-left neighbor is alive.
        if currentCells[x][aboveCoord] == '#':
            numneighbours += 1 # Top neighbor is alive
        if currentCells[rightCoord][aboveCoord] == '#':
            numneighbours += 1 # Top-right neighbor is alive.
        if currentCells[leftCoord][y] == '#':
            numNeighbours += 1 # Left neighbor is alive.
        if currentCells[rightCoord][y] == '#':
            numNeighbours += 1 # Right neighbor is alive.
        if currentCells[leftCoord][belowCoord] == '#':
            numNeighbours += 1 #Bottom-left neighbor is alive.
        if currentCells[x][belowCoord] == '#':
            numNeighbours += 1 # Bottom neighbor is alive.
        if currentCells[rightCoord][belowCoord] == '#':
            numNeighbours += 1 # Bottom-right neighbor is alive.

        # Set cell based on Conway's Game of Life rules:
        if currentCells[x][y] == '#' and (numNeighbours == 2 or
        numNeighbours == 3):
        # Living cells with 2 or 3 neighbors stay alive:
            nextCells[x][y] = '#'
        elif currentCells[x][y] == ' ' and numNeighbours == 3:
            # Dead cells with 3 neighbors become alive:
            nextCells[x][y] = '#'
        else:
            # Everything else dies or stays dead:
            nextCells[x][y] = ' '
time.sleep(1) #Add a one second pause to reduce flickering.


# press Ctrl+C in the terminal to stop.