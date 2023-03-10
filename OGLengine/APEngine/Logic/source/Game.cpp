#include "Game.h"
#include "Triangle.h"
#include "GameObject/Component.h"
#include "GameObject/Renderer.h"

Triangle triangle;

void Game::setup()
{
    Renderer rnd;

    rnd.Update();

    window.init();
    
    triangle.init();
}

bool Game::isOn()
{
    return window.isOpen();
}

void Game::loop()
{
    window.processInput();
    window.clear();
    
    //logic

    //draw objects
    
    triangle.draw();
    
    window.swap();
    window.pollEvents();
}

void Game::close()
{
    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    window.terminate();
}
