# ejemplo de if-else en python
edad = int(input("¿Cuántos años tienes?:\n"))

if edad < 0:
    print("No puedes tener una edad negativa")
elif edad < 18 and edad >= 0:
    print("No puedes usar este programa financiero")
elif edad >= 18:
    print("Bienvenido, en qué desea invertir hoy")