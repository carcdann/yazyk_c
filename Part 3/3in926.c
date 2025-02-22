#include <stdio.h>
// 3. Данные в языке Си
/*
int main()
{
    float weight;
    float value;
    // Создаем переменную с плавающей точкой отвечающую за вес
    // Создаем переменную отвечающую за Платиновый эквивалент

    // в си имеется как минимум два типа данных с плавающей точкой
    // один из которых float - хранит 6 знаков после точки
    // другой же тип данных это double - хранит 15 знаков после точки
    // раньше из-за ограниченности возможностей железа использовали чаще
    // float, но позже с развитием технологий стандартом стал double

    printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
    printf("Давай подсчитаем\n");
    printf("Пожалуйста введите свой вес, выраженный в фунтах: ");

    // создаем выводы на экраны с текстом после чего используем scanf

    scanf("%f", &weight); // %f является типом данных
    value = 1700.0 * weight * 14.5833;
    // scanf нужен в данном случае, чтобы пользователь ввел какие-то числа
    // scanf имеет вид - scanf("%тип данных",&название переменной)
    // в котором % - обьявление, что сейчас будет использоваться какой-то тип данных
    // после запятой идет Обязательный символ & он позволяет обращаться к переменной и сохранять в неё
    // scanf почти в 99% случаев будет использоваться нами в программах

    printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value);
    printf("Вы легко можете стать достойным этого! Если цена платины падает,\n");
    printf("ешьте больше для поддержания своей стоимости.\n");

    // Так выглядит простая версия этой программы, но что будет,
    // если мы введем вместо чисел БУКАВЫ?
    // ответ очевиден... ничего плохого, так как проверок в нашей программе нет
    // проверках в наших программах книга скорее всего повествует позже
    // как мы видим , программа не ломается, но начинает обрабатывать то,что не должна обрабатывать
    // по этому Создадим проверку 
    return 0;
}
//-----------------------

// Что будет если не поставить символ & ?
    // - программа не будет работать

// Что будет если дать программе с типом float число с больше чем 6 цифр после точки?
    // - программа будет работать, но возможно не корректно из-за округления
    // - допустим у нас есть число 14.583333987
    // - по идее число превратится в 14.583334, что выведет в последствии другой результат

// Что будет если указать другой тип данных в scanf?
    // - компилятор не даст вам создать файл a.out

// Обязательно ли ставить в числе 1700.0 точку с нулем?
    // - вообще программа даст вам собрать файл a.out
    // - но это черевато погрешностями в вычислениях

//------------------------
*/


//------ Версия программы с проверкой на Число/Символ----------


/*
int main()
{
    float weight;
    float value;
  
    printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
    printf("Давай подсчитаем\n");
    printf("Пожалуйста введите свой вес, выраженный в фунтах: ");

    if (scanf("%f", &weight) / 1 ) // true false проверка на число ,
    { // засунув scanf в конструкцию if-else мы сможем повлиять на дальнейшие события
      //  if с этой скобки начинается условие для if ->(scanf("%f", &weight) / 1 )<- здесь условие заканчивается , между ними заключен scanf("%...",&...)
        value = 1700.0 * weight * 14.5833;
        printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value);
        printf("Вы легко можете стать достойным этого! Если цена платины падает,\n");
        printf("ешьте больше для поддержания своей стоимости.\n");
    }
    else
    {
        printf("OSHIBOCHKA!!!!");
    }
// как мы видим проверка сработала, как это устроенно?
// все очень просто, допустим вы едете в машине и перед вами развилка 
// один путь вас ведет прямиком домой, а другой в магазин
// И тут как раз таки и начинается if else
// условие в if записывается в круглых скобках () , на примере магазина это будет выглядить так
// if (мы купили продукты){ выводим текст, мы едем домой } дальше пишется else что означает в противном случае едем в магазин
// целиком конструкция выглядит так
//  if(Мы купили продукты){ Едем домой } else { Едем в магазин за продуктами }
//  В этом вся суть конструкции if else 
//  eсли не одно, то другое)))
    return 0;
}
*/
    // В данном случае создав проверку на деление на 1
    // мы даем понять компутеру, что есть две ветки развития событий
    // в случае если будет введено число все будет работать
    // но в случае ввода любого символа произойдет ошибка
    // Если спросить чат GPT является ли этот вариант написания приемлимым
    // то он ответит нет по 4 пунктам и предложит не / 1, а == 1
    // что означает что мы любое число будем приравнивать к 1
    // либо у нас будет получаться либо нет
    // весь замысел проверок держится на TRUE - FALSE
    // если мы можем прировнять к 1, то будет TRUE и мы сможем продолжить наш маршрут

    // Но данная проверка позволяет нам проверять только на символ,
    // Но как быть с отрицательными значениями?



//-----------------Наличие двух проверок в Коде------------------------

int main()
{
    float weight;
    float value;

    printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
    printf("Давай подсчитаем\n");
    printf("Пожалуйста введите свой вес, выраженный в фунтах: ");

    if (scanf("%f", &weight), weight >= 0) // true false проверка на число ,
    {// на этот раз мы делаем проверку выводя результат ввода в переменную
        // после чего делаем простую проверку на >=0 , которая одновременно проверяет сразу на два момента
        // что перед нами число, а так же, что число не меньше 0 но может быть равно 0
        // такая проверка убивает два зайца одним махом, но так ли все гладко?
        value = 1700.0 * weight * 14.5833;
        printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value);
        printf("Вы легко можете стать достойным этого! Если цена платины падает,\n");
        printf("ешьте больше для поддержания своей стоимости.\n");
    }
    else
    {
        printf("OSHIBOCHKA!!!!");
    }

    return 0;
}

// С помощью weight >= 0 мы сразу проверяем число на два момента
// Вводит ли пользовователь число?
// а так же является ли это число положительным?
// но если вы хотите создать полностью рабочую программу,
// то вам нужно учесть и другие проверки
// потому что программа считается законченной только тогда
// когда в ней учтены все моменты

//-----------------------

// Но мы же вроде учли все возможные варианты, разве это не так?
    // - Нет, это не так, допустим пользователь введет 12.2
    // - В таком случае мы получим: 302457.62
    // - Но в случае, если пользователь введет 12,2 
    // - То результатом будет: 297499.31
    // - Как вы могли заметить результаты совсем отличаются от друг друга
    // - И это только пример, насолько важно делать проверки

// Разумеется учесть все проверки в одиночку очень тяжело,
// по этому во время разработки нанимат тестировщиков 
// с их больными фантазиями ^_^ T_T
