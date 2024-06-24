# README

## POLSKI

### Opis
Repozytorium to zawiera projekty powszechnie występujących i używanych na co dzień algorytmów.

Każdy z algorytmów jest zaprezentowany w trzech językach programowania:

- C
- C++
- Python

W każdym z wymienionych wyżej folderów znajdują się poszczególne projekty algotyrmów - na każdy algorytm 
przypada oddzielny projekt.

### Sposób uruchamiania

#### Windows
Z uwagi na fakt, że projekty tworzonne są w trzech różnych językach programowania, a jednoczśnie nie zawsze
potrzebujemy wszystkich algorymów, każdy z poszczególnych folderów projektowych ma swoje własne skrypty do 
budowy i uruchamiania.

#### C/C++
Do prawidłowego zbudowania i uruchomienia projektów niezbędny jest:

- Kompilator C/C++: w projekcie używam GCC 13.1.0 https://winlibs.com/
- CMake: projekty wykonane na wersji 3.28 https://cmake.org/

W celu zbudowania dowolnego projektu należy uruchomić skrypt:
```
BuildScript.bat
```

Następnie w celu uruchomienia programu należy uruchomić skrypt:
```
RunScript.bat
```

Oba skrypty znajdują się w folderze projektowym każdego z algorytmów.

#### Python
Do prawidłowego zbudowania i uruchomienia projektów niezbędny jest:

- Python: w projekcie używam wersji 3.11.3 https://www.python.org/downloads/release/python-3113/

W celu zbudowania i jednocześnie uruchomienia projektu należy uruchomić skrypt:
```
Run.bat
```

#### Linux
Projekty nie posiadają skryptów uruchamiających i budujących dla Linuxa. Należy zbudować je ręcznie
zgodnie ze sposobem budowania projektów C/C++ na tej platformie.

## ENGLISH

### Description
This repository contains designs of common and everyday algorithms.

Each algorithm is presented in three programming languages:

- C
- C++ 
- Python

In each of the folders mentioned above there are individual algorithm projects - for each algorithm 
there is a separate project.

### How to run

#### Windows
Due to the fact that projects are created in three different programming languages, and at the same time we
not always need all the algorithms, each of the individual project folders has its own scripts for
building and running.

#### C/C++
To properly build and run projects, you need:

- C/C++ compiler: in project I use GCC 13.1.0 https://winlibs.com/
- CMake: projects made on version 3.28 https://cmake.org/

To build any project, you must run a script:
```
BuildScript.bat
```

Then, to run the program, run the script:
```
RunScript.bat
```

Both scripts are located in the design folder of each algorithm.

#### Python
To properly build and run projects, you need:

- Python: in project I use version 3.11.3 in the project https://www.python.org/downloads/release/python-3113/

In order to build and run the project at the same time, run the script:
```
Run.bat
```

#### Linux
The projects do not have run and build scripts for Linux. They must be built manually following the way 
C/C++ projects are built on this platform.