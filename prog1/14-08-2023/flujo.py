# ejemplo de if-else en python
edad = int(input("¿Cuántos años tienes?:\n"))
nombre = input("¿Cómo te llamas?:\n")
if edad < 0:
    print("No puedes tener una edad negativa")
elif edad < 18 and edad >= 0:
    if nombre.capitalize() == "Daniel":
        print("No puedes usar este programa financiero")
    else:
        print("Bienvenido, en qué quieres invertir hoy")
elif edad >= 18:
    if nombre.capitalize() == "Pepe":
        print("Hola Admin")
