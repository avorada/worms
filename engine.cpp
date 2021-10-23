#include "engine.h"
#include "logic.h"

Engine::Engine()
{
    /*
     * Здесь пишется основной код, который обычно пишется в main'е,
     * для создания функций нужно указать класс, от короторого она унаследована.
     * Далее нужно в файле logic.h объявить ее в подразделе public, указывая все аргументы
     * Примером служит функция example
     * Если нужна публичная переменная другого класса (например, высота или ширина окна),
     * то обращаемся к ней class::param.
     * Если переменная содержится в заголовочном файле (class.h) текущего класса,
     * то обращение к переменным осуществляется либо также, как и с другим классом,
     * либо напрямую
    */

    //EXAMPLE_START
    int k = logic::logic_a; // обязательное указание класса
    int b = Engine::engine_a; //через указание класса
    b = engine_a; // напрямую
    //EXAMPLE_END
}


//EXAMPLE_START
int Engine::example(int i)
{

    return i;
}
//EXAMPLE_END

bool* Engine::generateMap(int h, int w) {
    map = new bool[h];
    for (int i = 0; i < h; i++) {
        map[h] = new bool[w];
    }

    return map;
}
