#ifndef BLOCK_H
#define BLOCK_H
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Dot.h"
class Block
{
    public:
        int x,y;
        int  width,height;
        SDL_Surface *image;
        SDL_Surface *screen;
        Dot * dot;

        Block(int x, int y , int width, int height, SDL_Surface *image,SDL_Surface *screen, Dot* dot);
        bool pointIsInBlock(int point_x, int point_y);
        bool dotCollides();
        void show();
        void logic();
        virtual ~Block();
    protected:
    private:
};

#endif // BLOCK_H
