#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "main.h"
#include "globals.h"


Main::Main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(globals::SCREEN_WIDTH, globals::SCREEN_HEIGHT, 0, &this->_window, &this->_renderer);
    SDL_SetWindowTitle(this->_window, "Dozer");

    this->gameLoop();
}

Main::~Main() {
    SDL_DestroyWindow(this->_window);

}

void Main::gameLoop() {

    while(true) {
       this->draw(); 
    }

}

void Main::draw() {
    SDL_RenderPresent(this->_renderer);
    
}

int main(int argc, const char* argv[]) {
    Main main;
    return 0;
}