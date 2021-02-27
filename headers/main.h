#ifndef MAIN_H
#define MAIN_H

class Main {
    public:
        Main();
        ~Main();
    private:
        void gameLoop();
        void draw();
    	SDL_Window* _window;
        SDL_Renderer* _renderer;

};

#endif