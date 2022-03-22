

#### Todo sobre .gitignore

_¿Por que es conveniente incluirlo?_
**Pensemos que no todos los archivos y carpetas son necesarios de gestionar a partir del sistema de control de versiones. Hay código que no necesitamos enviar a Git, ya sea porque sea privado para un desarrollador en concreto y no lo necesiten (o lo deban) conocer el resto de las personas.**

_¿Cuando se debe hacer?_
**Debe hacerse cuando, como mencione arriba,deba ocultarse deliberadamente cierto codigo no requerido y/o solicitado, a traves del Git Bash**


_¿Como configuraria el archivo .gitignore?_
-El archivo .gitignore, es un archivo de texto que le dice a Git que archivos o carpetas ignorar en un proyecto.
-Un archivo local .gitignore generalmente se coloca en el directorio raíz de un proyecto. También se puede crear un archivo global .gitignore, y cualquier entrada en ese archivo se ignorará en todos los repositorios de Git.
-Para crear un archivo .gitignore local, creamos un archivo de texto y asignamos el nombre ".gitignore" (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que queramos que Git lo ignore.



Autor: Varela Tahiel Agustin