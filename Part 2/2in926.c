//-----------first.c-------------
#include <stdio.h>

int main()
{
    int num;
    num = 1;

    printf("Я простой ");
    printf("Компьютер.\n");
    printf("Моей любимой цифрой является %d, так как она первая.\n", num);

    return 0;
}
/*
В любой программе на языке C будет main, так как все основные действия происходят именно в main
Но перед тем как перейти к содержанию функции main рассмотрим #include <stdio.h>
Эта строчка позволяет нам выводить текст, из-за того, что не всем программам нужен вывод текста printf не была в стандартной библиотеке команд

// Если мы уберем в этом коде #include <stdio.h>, то программа все равно будет работать?
    // - Увы, но программа не скомпилируется, и вызовет ошибку

int main() - является функцией, которая всегда присутвует в любой программе на языке Си
int num - с помощью int мы создаем целочисленную переменную(создаем переменную которая является целым числом 1,2,3,458,1902837482 итд)
num = 1 - присваиваем num значение 1
После чего используем 3 раза printf(""), что позволяет нам выводить как текст так и числа (так и символы если надо будет)

// А вот обязательно ли стаить точку с запятой в конце?
    // - Почти всегда это будет необходимо, иначе на вас начнут ругаться всевышние силы компуктера

// А если я поставлю вместо двойных кавычек одинарные, что будет?
    // - Выведет ошибку, потому как не стоит забывать, что компуктер хоть супер крутой Мужик, но не соблюдая правила написания, он ничего не поймет

// А зачем круглые скобки после main?
    // - В них мы в будущем будем заводить дополнительные параметры

Настало время немного разобраться с терминалом, а то далеко без него не уедем
(cd) - Чтобы перемещаться(заходить/выходить) между папками мы используем (cd название папки) чтобы вернуться в предыдущую папку пишем cd ..
(ls) - Чтобы посмотреть содержимое папки в которой мы находимся достаточно написать ls
(gcc) - Позволяет нам собирать весь наш код и создает файл a.out который мы и будем запускать
(./a.out) - вызов нашего готового файла с программой
(clear) - Убирает весь хаос что мы начудили в Терминале

Чуть не забыл про комментарии
В ходе работы что-то забудится и чтобы потом не ломать голову оставляют комментарии
// - с помощью двойной черточки мы создаем комментарий на одну строку
 А с помощью черточки и звездочки создаются многострочные комментарии

и так математика, *,/,+,-,%
всем известные символы и понятно дело что одно умножает второе делит
с процентом все немного повеселее
называется штука процентом от деления %
допустим мы напишем 12%2 , результатом такого вычесления будет 0
Потому что мы сумели поделить без остатка
в случае 11:2 , у нас останется 1 , так как мы можем поделить 10/2 но останется 1

*/