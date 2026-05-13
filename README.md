# Guía APE 3 — Árboles Binarios en C++ y Java

Proyecto académico desarrollado para la asignatura de **Estructura de Datos** de la **Universidad Técnica de Ambato**.

---

# Información Académica

- **Universidad:** Universidad Técnica de Ambato
- **Facultad:** Ingeniería en Sistemas, Electrónica e Industrial
- **Carrera:** Ingeniería en Software
- **Asignatura:** Estructura de Datos
- **Período Académico:** Enero - Junio 2026
- **Tema:** Recorrido de Árboles Binarios
- **Estudiante:** Justin Danilo Ojeda Ramírez
- **Docente:** Ing. José Caiza

---

# Estructura del Repositorio

```bash
├── Captura ejercicios/
├── cpp/
├── java/
└── README.md
```

## Descripción de Carpetas

- **Captura ejercicios/**  
  Contiene las capturas de pantalla de la ejecución de los ejercicios.

- **cpp/**  
  Implementaciones de los ejercicios desarrollados en C++.

- **java/**  
  Implementaciones de los ejercicios desarrollados en Java.

- **README.md**  
  Documento principal de explicación del proyecto.

---

# Introducción

Los árboles binarios son estructuras de datos no lineales utilizadas para representar información jerárquica de manera eficiente. Estas estructuras permiten organizar datos mediante nodos conectados entre sí, facilitando operaciones como búsqueda, inserción, recorridos y clasificación.

En este proyecto se desarrollaron ejercicios prácticos relacionados con árboles binarios utilizando los lenguajes de programación **C++** y **Java**, aplicando conceptos fundamentales como:

- Recursividad
- Recorridos DFS
- Inserción en árboles binarios de búsqueda
- Cálculo de altura
- Inversión de árboles
- Conteo de nodos

Además, se realizó una comparación entre ambos lenguajes y se organizó el proyecto mediante GitHub.

---

# Objetivos

## Objetivo General

Implementar recorridos y operaciones sobre árboles binarios utilizando C++ y Java para comprender estructuras jerárquicas y algoritmos DFS/BFS.

---

## Objetivos Específicos

- Implementar recorridos en árboles binarios.
- Aplicar recursividad en operaciones sobre árboles.
- Desarrollar inserción en árboles binarios de búsqueda (BST).
- Calcular altura y cantidad de nodos en árboles.
- Comprender el funcionamiento de DFS y BFS.
- Comparar diferencias entre Java y C++.
- Organizar y documentar el proyecto utilizando GitHub.

---

# Marco Teórico

## Árbol Binario

Un árbol binario es una estructura de datos jerárquica formada por nodos. Cada nodo puede tener como máximo dos hijos:

- Hijo izquierdo
- Hijo derecho

El primer nodo se denomina raíz y los nodos sin hijos se conocen como hojas.

---

## DFS (Depth First Search)

DFS o búsqueda en profundidad recorre primero los nodos más profundos utilizando recursividad.

### Tipos de recorridos DFS

### InOrder
```text
Izquierda → Raíz → Derecha
```

### PreOrder
```text
Raíz → Izquierda → Derecha
```

### PostOrder
```text
Izquierda → Derecha → Raíz
```

---

## BFS (Breadth First Search)

BFS o búsqueda por amplitud recorre el árbol nivel por nivel utilizando una cola (FIFO).

---

## Recursividad

La recursividad permite que una función se llame a sí misma para resolver problemas de forma jerárquica.

---

# Ejercicios Implementados

# Implementación en C++

## Ejercicio 1 — Contar nodos en árbol N-ario

### Temas aplicados:
- Recursividad
- Árbol N-ario
- Conteo de nodos

### Funcionalidad:
Cuenta la cantidad total de nodos presentes en el árbol.

---

## Ejercicio 2 — Inserción en Árbol Binario de Búsqueda (BST)

### Temas aplicados:
- Inserción
- Árboles BST
- Comparaciones

### Funcionalidad:
Inserta nuevos valores respetando las reglas de un BST.

---

## Ejercicio 3 — Calcular altura del árbol

### Temas aplicados:
- Recursividad
- Profundidad del árbol

### Funcionalidad:
Calcula la altura máxima del árbol.

---

## Ejercicio 4 — Recorrido InOrder

### Temas aplicados:
- DFS
- Recorridos recursivos

### Funcionalidad:
Recorre el árbol en orden:
```text
Izquierda → Raíz → Derecha
```

---

## Ejercicio 5 — Invertir árbol binario

### Temas aplicados:
- Transformación de árboles
- Recursividad

### Funcionalidad:
Intercambia los hijos izquierdo y derecho de cada nodo.

---

# Implementación en Java

## Ejercicio 1 — Contar nodos
## Ejercicio 2 — Inserción en BST
## Ejercicio 3 — Altura del árbol
## Ejercicio 4 — Recorrido InOrder
## Ejercicio 5 — Invertir árbol binario

Todos los ejercicios fueron desarrollados también en Java para comparar sintaxis, manejo de memoria y estructuras.

---

# Capturas de Ejecución

Las capturas de ejecución de todos los ejercicios se encuentran dentro de la carpeta:

```bash
Captura ejercicios/
```

Estas evidencias muestran la correcta ejecución tanto en C++ como en Java.

---

# Comparación DFS vs BFS

| Característica | DFS | BFS |
|---|---|---|
| Tipo de recorrido | En profundidad | Por amplitud |
| Forma de recorrido | Explora ramas profundas | Recorre nivel por nivel |
| Estructura utilizada | Recursividad / pila | Cola FIFO |
| Recorridos incluidos | InOrder, PreOrder, PostOrder | BFS |
| Complejidad temporal | O(n) | O(n) |

---

# Complejidad Temporal

| Recorrido | Complejidad |
|---|---|
| InOrder | O(n) |
| PreOrder | O(n) |
| PostOrder | O(n) |
| BFS | O(n) |

Todos los recorridos visitan cada nodo una sola vez.

---

# Tecnologías Utilizadas

- C++
- Java
- Git
- GitHub
- Visual Studio Code

---

# Cómo ejecutar los programas

# Ejecutar C++

## Compilar

```bash
g++ archivo.cpp -o programa
```

## Ejecutar

```bash
./programa
```

---

# Ejecutar Java

## Compilar

```bash
javac Archivo.java
```

## Ejecutar

```bash
java Archivo
```

---

# Conclusiones

- Se implementaron correctamente recorridos y operaciones sobre árboles binarios.
- Se aplicó recursividad para resolver problemas jerárquicos.
- Se comprendió la diferencia entre DFS y BFS.
- Se identificaron diferencias importantes entre C++ y Java.
- GitHub permitió organizar y documentar el proyecto profesionalmente.

---

# Recomendaciones

- Mantener una estructura organizada del repositorio.
- Documentar adecuadamente el código.
- Realizar pruebas constantes durante el desarrollo.
- Continuar aprendiendo estructuras avanzadas como árboles AVL y árboles balanceados.

---

# Repositorio GitHub

Repositorio oficial del proyecto:

```text
https://github.com/Caza711/GuiaApe3
```

---

# Autor

## Justin Danilo Ojeda Ramírez

Estudiante de Ingeniería en Software  
Universidad Técnica de Ambato

---
