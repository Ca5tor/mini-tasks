
# Мини Задачки

В этом репозитории будут появляться решенные мной задачки с codewars приимещественно на C++

### файл a_0.cpp
Использую контейнер std::map, посчитать количество повторяющихся символов в строке и вывести в консоль парой символ и его количество(поддержка русского отсутсвтует, так что вводите строку на английском), например: 

Ввод: \
    aaabbcccc

Вывод: \
    a 3\
    b 2\
    c 4


## Инструкция по запуску

Клонировать проект

```bash
  git clone git@github.com:Ca5tor/mini-tasks.git
```

Перейти в каталог проекта

```bash
  cd mini-tasks
```

Скомпилировать файл

```bash
  c++ -Wall -Werror -Wextra a_0.cpp -o file
```

Запуск

```bash
  ./file yourString
```

### файл a_1.cpp

Introduction
The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

Task
Given a year, return the century it is in.

Examples\
1705 --> 18\
1900 --> 19\
1601 --> 17\
2000 --> 20

