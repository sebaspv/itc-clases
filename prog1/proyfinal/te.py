import random
import os

def generate_maze(rows, cols):
    maze = [['■'] * (2 * cols + 1) for _ in range(2 * rows + 1)] # mat de ###

    def dfs(x, y):
        maze[y][x] = ' '
        directions = [(2, 0), (-2, 0), (0, 2), (0, -2)]
        random.shuffle(directions)

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 < nx < 2 * cols and 0 < ny < 2 * rows and maze[ny][nx] == '■':
                maze[y + dy // 2][x + dx // 2] = ' '
                dfs(nx, ny) # dp xd

    dfs(1, 1) 
    maze[0][1] = ' '  # entrada de lab
    maze[2 * rows][2 * cols - 1] = ' '  # salida

    return maze

def print_maze(maze):
    for row in maze:
        print(' '.join(row))

def clear_screen():
    os.system('clear')

def print_maze_with_player(maze, player_pos):
    maze_with_player = [row[:] for row in maze]
    y, x = player_pos
    maze_with_player[y][x] = 'O'
    
    clear_screen()
    print_maze(maze_with_player)

def move_player(maze, player_pos, direction):
    y, x = player_pos
    dy, dx = direction

    new_y, new_x = y + dy, x + dx

    if 0 <= new_y < len(maze) and 0 <= new_x < len(maze[0]) and maze[new_y][new_x] == ' ':
        return new_y, new_x
    else:
        print("Movimiento inválido. No puedes atravesar paredes.")
        return y, x

def find_optimal_path(maze, start, end):
    def dfs(path, current):
        if current == end:
            paths.append(path)
            return
        y, x = current
        for dy, dx in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ny, nx = y + dy, x + dx
            if 0 <= ny < len(maze) and 0 <= nx < len(maze[0]) and maze[ny][nx] == ' ' and (ny, nx) not in visited:
                visited.add((ny, nx))
                dfs(path + [(ny, nx)], (ny, nx))
                visited.remove((ny, nx))

    visited = set()
    paths = []
    dfs([start], start)
    return min(paths, key=len) if paths else []

rows, cols = 7, 7
maze = generate_maze(rows, cols)
player_pos = (0, 1)

while player_pos != (2 * rows, 2 * cols - 1):
    print_maze_with_player(maze, player_pos)

    direction = input("Ingresa la dirección (W/A/S/D): ").upper()

    if direction == 'W':
        player_pos = move_player(maze, player_pos, (-1, 0))
    elif direction == 'A':
        player_pos = move_player(maze, player_pos, (0, -1))
    elif direction == 'S':
        player_pos = move_player(maze, player_pos, (1, 0))
    elif direction == 'D':
        player_pos = move_player(maze, player_pos, (0, 1))
    else:
        print("Entrada no válida. Utiliza W/A/S/D para moverte.")

print("¡Felicidades! Has llegado a la salida.")
