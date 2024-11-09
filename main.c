#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Surface *screen;

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;

    };

    



}