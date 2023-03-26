Разработайте и запрограммируйте класс Тхt, который управляет динамически выделяемым массивом строк. 
При создании экземпляра класса Тхt объект ничего не получает или получает ссылку на неизменяемую строку. 
Если файл не существует, объект Тхt принимает безопасное пустое состояние. 
Если файл существует, конструктор с одним аргументом выделяет память для количества строк, содержащихся в файле, и копирует их в память. 
Чтобы просмотреть синтаксис для чтения из текстового файла с помощью объекта ifstream, см. класс istream
Класс Тхt включает следующие функции-члены:
• конструктор копирования;
• оператор присваивания копий;
• конструктор перемещения;
• оператор присваивания перемещения;
• деструктор;
• функция-член с именем size_t size () const, которая возвращает количество записей текстовых данных;
Определите свой класс и его реализацию в пространстве имен l1. 
Сохраните определение класса в файле заголовка с именем Txt.h, а определения функций-членов - в файле реализации с именем Txt.cpp.
