#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
public:
    Engine();

    //DELETE_START
public:
    int example(int i);
    const static int engine_a = 0;
    bool *map;
    //DELETE_END
    bool *generateMap(int h, int w);
};


#endif // ENGINE_H
