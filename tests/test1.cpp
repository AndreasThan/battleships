#include <iostream>
#include <string>

#include <utils.h>
#include <GameController.h>

using namespace Battleships;

int main()
{
    GameController controller = GameController(10, 1300, 600);

    displayBoard(controller.getModel().Player1().getBoard());
    displayBoard(controller.getModel().Player2().getBoard());
}