#include "Block.h"
#include "Utility.h"
Block::Block(int x, int y , int width, int height, SDL_Surface *image,SDL_Surface *screen, Dot *dot)

{
    this-> x=x;
    this-> y=y;
    this-> width= width;
    this->height =height;
    this->image=image;
    this->screen = screen;
    this->dot=dot;
}
bool Block:: pointIsInBlock(int point_x, int point_y){
if(point_x > this->x && point_x < this->x+ this->width && point_y >this->y && point_y <this->y+this->height)
    return true;
 return false;
}
bool Block::dotCollides(){

    if(pointIsInBlock(dot->x,dot->y)){
        this->image= NULL;
       this->x=3000;
       this->y=3000;
    }


    /*if(pointIsInBlock(dot->x,dot->y))
        return true;
      if(pointIsInBlock(dot->x+dot->DOT_WIDTH,dot->y))
        return true;
    if(pointIsInBlock(dot->x,dot->y+dot->DOT_HEIGHT))
        return true;
    if(pointIsInBlock(dot->x+dot->DOT_WIDTH,dot->y+dot->DOT_HEIGHT))
        return true;*/
}
void Block::logic(){

}
void Block::show(){
    apply_surface( x, y, image, screen );

}
Block::~Block()
{
       /* SDL_FreeSurface( image );
        SDL_FreeSurface( screen );
        delete dot;*/
}
