# Snakes and Ladders - Tarea 2
## Sebastian Ponce

Ejecutar el programa:
```sh
cd src
g++ snakes.cpp -o snakes.out
./snakes.out < input.txt > output.txt
```

Existe un error común con los números aleatorios: El número del dado siempre es el mismo si se ejecuta con las instrucciones de arriba.
Esto es fácilmente prevenible ejecutando el programa con un input manual, y es inevitable ya que la "seed" generadora de números
aleatorios es a partir del tiempo local de la computadora. Como todos los inputs son al mismo tiempo, el número aleatorio es el mismo.
