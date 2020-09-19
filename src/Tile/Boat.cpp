#include "Boat.h"

Boat::Boat(SDL_Renderer* renderer, SDL_Texture* texture, int posx, int posy) : Sprite(renderer, texture, 0, 0, 78, 40)
{
    //ctor
}

Boat::~Boat()
{
    //dstror
}


void Boat::attack(Boat &target)
{
    //init Fight
}

void Boat::setCurrentTile(Tile* tile)
{
    m_lastTile = m_currentTile;
    m_currentTile = tile;
}

Tile* Boat::getCurrentTile()
{
    return m_currentTile;
}

float interpolation( float V1, float V2, float t)
{
    return (1-t)*V1 + t*V2;
}

void Boat::render(float interpolation)
{

    SDL_Rect* rectLast = m_lastTile->getSDL_Rect();
    SDL_Rect* rectCurrent = m_currentTile->getSDL_Rect();
    setPosition((1-interpolation)*rectLast->x + interpolation*rectCurrent->x, (1-interpolation)*rectLast->y + interpolation*rectCurrent->y -8);
    std::cout<<(1-interpolation)*rectLast->x + interpolation*rectCurrent->x<<std::endl;
    Sprite::render();
}



// Player
//
//Player::Player(int posx,int posy,float vie,float degat,int type,bool vivant,int argent, int level, bool tour, int armor): Boat(posx,posy,vie,degat,vivant,argent,tour,armor), m_level(level)
//{
//
//}
//
//int Player::Depense(int retrait)
//{
//    if (m_argent > retrait)
//    {
//        m_argent -= retrait;
//        return m_argent;
//    }
//    return m_argent;
//}
//
//
//// Ennemy
//
//Ennemy::Ennemy(int posx,int posy,float vie, float degat,bool vivant,int argent,bool tour,int armor): Boat(posx,posy,vie,degat,vivant,argent,tour,armor)
//{
//
//}
//
