import os
import random
import tkinter as tk

while True:
    dificultad=(input("Selecciona la difícultad: 1 para fácil, 2 para normal y 3 para difícil: "))
    dificultad=dificultad.lower()
    if dificultad=="uno" or dificultad=="1":
        dificultad=5
        break
    elif dificultad=="dos" or dificultad=="2":
        dificultad=7
        break
    elif dificultad=="tres" or dificultad=="3":
        dificultad=9
        break
    else: 
        print("Selecciona una de las opciones.")

def generate_maze(rows, cols):
    maze = [['#'] * (2 * cols + 1) for _ in range(2 * rows + 1)]

    def dfs(x, y):
        maze[y][x] = ' '
        directions = [(2, 0), (-2, 0), (0, 2), (0, -2)]
        random.shuffle(directions)

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 < nx < 2 * cols and 0 < ny < 2 * rows and maze[ny][nx] == '#':
                maze[y + dy // 2][x + dx // 2] = ' '
                dfs(nx, ny)

    dfs(1, 1)
    maze[0][1] = ' ' 
    maze[2 * rows][2 * cols - 1] = ' '

    return maze

import tkinter as tk

def move_player(maze, player_pos, direction):
    y, x = player_pos
    dy, dx = direction

    new_y, new_x = y + dy, x + dx

    if 0 <= new_y < len(maze) and 0 <= new_x < len(maze[0]) and maze[new_y][new_x] == ' ':
        return new_y, new_x
    else:
        print("Movimiento inválido. No puedes atravesar paredes.")
        return y, x

def on_key_press(event):
    global player_pos, move_count
    direction = event.char.upper()
    if direction in ('W', 'A', 'S', 'D'):
        player_pos = move_player(maze, player_pos, DIRECTIONS[direction])
        move_count += 1
        print_maze_with_player()

def print_maze_with_player():
    global window
    canvas.delete("all")
    for y, row in enumerate(maze):
        for x, cell in enumerate(row):
            color = "white" if cell == ' ' else "black"
            canvas.create_rectangle(x * CELL_SIZE, y * CELL_SIZE, (x + 1) * CELL_SIZE, (y + 1) * CELL_SIZE, fill=color, outline=color)
    y, x = player_pos
    canvas.create_oval(x * CELL_SIZE, y * CELL_SIZE, (x + 1) * CELL_SIZE, (y + 1) * CELL_SIZE, fill="red", outline="red")

    if player_pos == (2 * rows, 2 * cols - 1):
        print("¡Has llegado a la salida!")
        print(f"Número de movimientos realizados: {move_count}")
        optimal_moves = abs(player_pos[0] - start_pos[0]) + abs(player_pos[1] - start_pos[1])
        print(f"Cantidad óptima de movimientos: {int(optimal_moves*1.5)}")
        window.destroy()

rows, cols = dificultad, dificultad
maze = generate_maze(rows, cols)
player_pos = (0, 1)
start_pos = player_pos
move_count = 0

DIRECTIONS = {'W': (-1, 0), 'A': (0, -1), 'S': (1, 0), 'D': (0, 1)}

CELL_SIZE = 40
window = tk.Tk()
window.title("LaberinTec")

canvas = tk.Canvas(window, width=(cols*2+1) * CELL_SIZE, height=(rows*2+1) * CELL_SIZE, bg="white")
canvas.pack()

window.bind("<Key>", on_key_press)

print_maze_with_player()

window.mainloop()
