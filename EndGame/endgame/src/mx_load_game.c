#include "game.h"

void mx_load_game(t_state *game) {
    SDL_Surface *surf = NULL;


    //load BG musix

    Mix_Music *namemusic = Mix_LoadMUS(MUSIC_MENU);
    if(!namemusic) {    
        printf("Mix_LoadMUS(\"music.mp3\"): %s\n", Mix_GetError());
    // this might be a critical error...
    }
    game->bg_music = namemusic;

    game->font = TTF_OpenFont(FONT_MAIN, 25);

    // space bg:
    surf = IMG_Load(BACKGROUND_IMG);
    if (surf == NULL) {
        mx_printerr("can't find space bg");
        SDL_Quit();
        exit(1);
    }

    game->bg = SDL_CreateTextureFromSurface(game->renderer, surf);

    // orange circle
    surf = IMG_Load(CIRCLE);
    if (surf == NULL) {
        mx_printerr("Can't load orange gate");
        SDL_Quit();
        exit(1);
    }

    game->gate_img = SDL_CreateTextureFromSurface(game->renderer, surf);
    
    surf = IMG_Load(CIRCLE2);
    if (surf == NULL) {
        mx_printerr("Can't load orange gate");
        SDL_Quit();
        exit(1);
    }

    game->gate2_img = SDL_CreateTextureFromSurface(game->renderer, surf);
    
    // car

    surf = IMG_Load(PLANE);
    if (surf == NULL) {
        mx_printerr("Can't load car");
        SDL_Quit();
        exit(1);
    }

    game->car = SDL_CreateTextureFromSurface(game->renderer, surf);

    surf = IMG_Load(PLANE2);
    if (surf == NULL) {
        mx_printerr("Can't load car");
        SDL_Quit();
        exit(1);
    }

    game->car2 = SDL_CreateTextureFromSurface(game->renderer, surf);

    surf = IMG_Load(HEART);
    if (surf == NULL) {
        mx_printerr("Can't load heart");
        SDL_Quit();
        exit(1);
    }
    game->heart_img = SDL_CreateTextureFromSurface(game->renderer, surf);

    surf = IMG_Load(HEART_EMPTY);
    if (surf == NULL) {
        mx_printerr("Can't load empty heart");
        SDL_Quit();
        exit(1);
    }
    game->heart_empty_img = SDL_CreateTextureFromSurface(game->renderer, surf);

    


    SDL_FreeSurface(surf);

    game->plane.x = MX_PLANE_ST_X;
    game->plane.y = 220;
    game->plane.w = MX_PLANE_W;
    game->plane.h = MX_PLANE_H;
    game->plane.dy = 0;
    game->plane.dw = 0;
    game->plane.cnt = 0;

    game->plane2 = game->plane;

    game->gate.x = MX_RANDOM_X;
    game->gate.y = MX_RANDOM_Y;
    game->gate.w = MX_RING_W;
    game->gate.h = MX_RING_H;
    game->space.x = 0;
    game->space.y = 0;
    game->space.w = MX_WIND_W;
    game->space.h = MX_WIND_H;
    game->plane.life = GAME_LIFE;
    game->plane2.life = GAME_LIFE;

    game->heart.w = 30;
    game->heart.h = 30;
    // SDL_FreeSurface(surf);
}
