#include <iostream>
#include <string>

#include <utils.h>
#include <GameController.h>

int main()
{
    Battleships::GameController controller = Battleships::GameController(10, 1300, 600);

    controller.run();

    return 0;
}