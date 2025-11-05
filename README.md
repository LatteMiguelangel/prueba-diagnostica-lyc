# Prueba Diagnostica — Lenguajes y Compiladores (SEM 2025-2)

Este repositorio contiene la solución a la prueba diagnostica de la asignatura **Lenguajes y Compiladores**, organizada en cuatro problemas independientes. Cada carpeta incluye el código fuente, scripts de ejecución y archivos auxiliares necesarios para reproducir los resultados.

🎥 [ENLACE AL VIDEO DE LA DEFENSA](https://youtu.be/G9pNm5_mehQ)


---

## 📁 Estructura del repositorio

- `Problema1/` → Generación del triángulo de Pascal y evaluación de polinomios en C y Python
- `Problema2/` → Reconocimiento de patrones con expresiones regulares (notación científica, IP, correo electrónico) en Python
- `Problema3/` → Traducción de palabras reservadas del lenguaje C a español, con lectura dinámica de archivos
- `Problema4/` → Análisis de código fuente en C para identificar y traducir palabras clave, implementado en Python

---

## ⚙️ Instalación y ejecución de componentes

### 💻 Lenguaje C

Para compilar y ejecutar los programas en C se utilizó el entorno **MSYS2** con `gcc`, integrado en Visual Studio Code. El siguiente video fue utilizado como guía para configurar el entorno correctamente:

📺 [Cómo ejecutar código C en VSCode (YouTube)](https://youtu.be/v3ENcQpoA5A)

Compilación típica:

```bash
gcc ejercicio2.c -o ejercicio2.exe
```

### 🐍 Lenguaje Python

Los scripts en Python fueron desarrollados y ejecutados en Jupyter Notebook, utilizando únicamente librerías nativas del lenguaje (como ```re``` para expresiones regulares). No fue necesario instalar dependencias externas ni configurar entornos virtuales.

Para instalar Python y Jupyter Notebook desde línea de comandos, se siguieron los siguientes tutoriales:
📺 [Cómo instalar Python en Windows](https://www.youtube.com/watch?v=7IPgxMg6hLk&pp=ygUUY29tbyBpbnN0YWxhciBweXRob24%3D)
📺 [Cómo instalar Jupyter Notebook](https://www.youtube.com/watch?v=6j6L3feh1p4pp=ygUeY29tbyBpbnN0YWxhciBqdXB5dGVyIG5vdGVib29r)

Instalación por terminal:

```bash
pip install notebook
jupyter notebook
```

## ⚠️ Nota importante sobre rutas absolutas

En los ejercicios que involucran lectura de archivos (Problema3 y Problema4), se utilizaron rutas absolutas específicas del entorno local (se deben modificar para que los scripts funcionen adecuadamente).
