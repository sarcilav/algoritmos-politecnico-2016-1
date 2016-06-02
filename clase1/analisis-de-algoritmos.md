build-lists: true

# ANÁLISIS DE ALGORITMOS

---

Los algoritmos son la parte más importante y más durable de las ciencias de la computación porque se pueden estudiar de forma independiente de el lenguaje y de la máquina

^This means that we need techniques that enable us to compare the efficiency of algorithm without implemting them.

---

# Técnicas de comparación

* RAM Model

^This talks about the how many operations in RAM (one time step)

* Best, Worst and Avarage-Case Complexity

^The worst-case complexity of the algorithm is the function defined by the maximun number of steps taken in any instance of size n

^The best-case complexity is the function defined by the minimun number of steps taken in any instance of size n

^The average-case complexity is the function defined by the average number of steps over all instances of size n

---

##  Notación asintótica.

---
* Cotas superiores (O)

^Big-oh, Orden de gx O(g(x)), esto quiere decir que existe almenos una constante C para la cual c.g(x) es superior a f(x), por lo que f(x)=O(g(x))

* Cotas inferiores (Ω)

^Omega

* Cotas ajustadas (Θ)

^Theta f(x)=THETA(g(x)) si existe c1.g(x) <= f(x) <= c2.g(x)

* Funciones comunes.

^O(1), O(lg n), O(n), O(n lg n), O(n^2), O(n^3), O(c^n), O(n!)

---

# Taller 1

^ Operando con funciones Big Oh

---

# Taller 2

^ Sort big oh notación ejemplos justificación

---

### Resolución de Recurrencias.
#### Divide and Conquer

---

#### Método de iteración

```
T(n) = n + 3T(n/2)
```

^Ejemplo , se busca en donde el termino ultimo sea uno, sustituir hasta donde sea evidente la sumatoria

---

#### Método de sustitución

Se asume una cota superior, se reemplaza en la primera iteración, y luego se hace inducción para probar que existen almenos un C que cumple la cota.

---

#### Método del árbol de recursión

Se asume que el problema la recursión se puede partir siempre en partes iguales, para dibujar un arbol que represente el costo de operaciones en cada paso de la recursión

^Dibujar el arbol y mostrar los elementos

^Por ejemplo T(n) = 3T(n/4) + cn^2 (en el primer paso el costo es cn^2)
en el segundo paso es 3/16 * cn^2
en el tercero es (3/16)^2 * cn^2

Donde T() es como recurre, y el resto es el costo en cada paso

---

# Tarea 1

Teorema maestro para la resolución de recurrencias
