# Mutex em threads 005#

Explicando o exercicio, nele é preciso declarar uma matriz de ordem quadrada e criar ( alem da thread principal ) uma quantidade de threads igual ao numero de linhas da matriz onde cada uma delas sera responsavel por somar cada numero de cada linha e guardar esse valor em uma variavel e printar o resultado da soma de todos os numeros da matriz no final do programa. A maior dificuldade desse exercicio é basicamente a forma que as threads vao acessar a matriz criada, no meu codigo foi declarada um ponteiro para uma matriz, **( int ****MATRIZ** )** assim permitindo o acesso a matriz em tanto na função main, no qual ela sera montada atravez da alocacão de memoria duas vezes, uma fora do loop ( para dividir e definir o tamanho e quantos arrays teram a matriz ) e outra dentro do loop ( para definir cada caracter em uma array especifico ). Dessa forma, com a matriz ja definida, as threads seram designadas para somar cada linha da matriz e aplicar essa soma a uma variavel global.

## How to use ? :gear:
<img src="/image/C-logo-editado.png" align="right" width="300">

Some of the requirements to run and compile this process on your machine :

* Have a development environment for C language
    * GCC
    * Makefile
    * Vscode
* If you want to contribute 
    * GitHub
    * A Linux operating system 

Talking more about running and compiling this code on your machine, you have the option of compiling in Terminal 

```bash

~$ gcc "FILE NAME".c -o "EXECUTABLE NAME"

```

And after the compilation you just have to run the executable that was created by compiling

```bash

~$ ./"EXECUTABLE NAME"

```

Other way of compiling and running the code in your machine is using the Makefile <br>
(Which currently provides an option to compile, run the executable, and delete the executable to not take up space)

For compiling :
```bash

make         " gcc 'FILE NAME'.c -o 'EXECUTABLE NAME'" 

```
For run the executable
```bash

make run     "./'EXECUTABLE NAME'"

```
For remove the executable from the directory
```bash

make clean   "rm 'EXECUTABLE NAME'"

```
And thats it`s :wink: any questions send me a msg on slack!!
