# Libft
Reimplementación de funciones de la librería estándar de C (proyecto Libft de 42).

# 🧠 Libft – 42

Implementación personalizada de la librería estándar de C para el proyecto **Libft** del programa **42**.  
Esta librería reimplementa funciones esenciales de la libc y añade utilidades extra que serán la base para futuros proyectos en C.

---

## 📦 Compilación

Compila la librería con:

```bash
make          # compila las funciones básicas
make bonus    # compila las funciones bonus (listas)
make clean    # elimina archivos objeto
make fclean   # elimina objetos y la librería
make re       # recompila todo

gcc -Wall -Wextra -Werror main.c -L. -lft

Se generará el archivo libft.a

🧰 Funciones implementadas
🔹 Funciones de manejo de memoria
Función	Descripción
ft_memset	Rellena un bloque de memoria con un valor dado.
ft_bzero	Pone a cero un bloque de memoria.
ft_memcpy	Copia un bloque de memoria de origen a destino.
ft_memmove	Copia bloques de memoria incluso si se solapan.
ft_memchr	Busca un byte dentro de un bloque de memoria.
ft_memcmp	Compara dos bloques de memoria.
ft_calloc	Reserva memoria inicializada a cero.
🔹 Funciones de cadenas (strings)
Función	Descripción
ft_strlen	Devuelve la longitud de una cadena.
ft_strlcpy	Copia una cadena con límite de tamaño.
ft_strlcat	Concatena cadenas con límite de tamaño.
ft_strchr	Busca el primer carácter en una cadena.
ft_strrchr	Busca el último carácter en una cadena.
ft_strncmp	Compara dos cadenas hasta n caracteres.
ft_strnstr	Busca una subcadena dentro de otra.
ft_strdup	Duplica una cadena reservando memoria.
🔹 Funciones de conversión
Función	Descripción
ft_atoi	Convierte una cadena a entero (int).
ft_itoa	Convierte un entero (int) a cadena.
🔹 Funciones de caracteres
Función	Descripción
ft_isalpha	Comprueba si un carácter es una letra.
ft_isdigit	Comprueba si un carácter es un número.
ft_isalnum	Comprueba si es alfanumérico.
ft_isascii	Comprueba si pertenece al conjunto ASCII.
ft_isprint	Comprueba si es imprimible.
ft_toupper	Convierte una letra minúscula en mayúscula.
ft_tolower	Convierte una letra mayúscula en minúscula.
🔹 Funciones adicionales
Función	Descripción
ft_substr	Extrae una subcadena de una cadena dada.
ft_strjoin	Concatena dos cadenas en una nueva.
ft_strtrim	Elimina caracteres específicos del inicio y fin de una cadena.
ft_split	Divide una cadena en un array de cadenas según un delimitador.
ft_strmapi	Aplica una función a cada carácter de una cadena (crea una nueva).
ft_striteri	Aplica una función a cada carácter (modificando en sitio).
ft_putchar_fd	Escribe un carácter en un descriptor de archivo.
ft_putstr_fd	Escribe una cadena en un descriptor de archivo.
ft_putendl_fd	Escribe una cadena seguida de un salto de línea.
ft_putnbr_fd	Escribe un número entero en un descriptor de archivo.
🔹 Funciones Bonus (listas enlazadas)
Función	Descripción
ft_lstnew	Crea un nuevo nodo de lista.
ft_lstadd_front	Añade un nodo al inicio de la lista.
ft_lstsize	Devuelve el tamaño de la lista.
ft_lstlast	Devuelve el último nodo de la lista.
ft_lstadd_back	Añade un nodo al final de la lista.
ft_lstdelone	Libera un nodo específico.
ft_lstclear	Libera toda la lista.
ft_lstiter	Aplica una función a cada elemento de la lista.
ft_lstmap	Crea una nueva lista aplicando una función a cada nodo.