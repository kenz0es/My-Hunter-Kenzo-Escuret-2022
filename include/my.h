/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** prototype
*/

#ifndef MY_H
    #define MY_H
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>

typedef struct sprite {
    sfSprite **sprite;
    sfTexture **texture;
    int size;
} sprite;

typedef struct sound {
    sfSound **sound;
    sfSoundBuffer **soundbuffer;
    int size;
} sound;

typedef struct time {
    sfClock **clock;
    sfTime *time;
    float *seconds;
    int timer;
    int size;
} time;

typedef struct game {
    sfRenderWindow *window;
    int score;
    int esc;
    int space;
    int click;
    int catch;
    int miss;
    int splash;
    sfVector2i mousse;
} game;

typedef struct text {
    sfText **text;
    sfFont **font;
    int size;
} text;


//myhunter.c
void scale_position_sprite(float xpos, float ypos, float scale
    , sfSprite *sprite);
void size_position_text(float xpos, float ypos, float scale, sfText *text);
void create_sprite_texture(char *image, sprite *sprite_struct, int index);
game create_game(char *name);
//starting_screen.c
void starting_screen(game *game);
void time_management_starting_screen(time *time, sprite *sprite, text *text);
void render_starting_screen(game *game, sprite sprite, text text);
void close_continue_starting_screen(game *game);
void end_starting_screen(game *game);
//starting_screen_element.c
sprite sprite_starting_screen(void);
sound sound_starting_screen(void);
text text_starting_screen(void);
void render_sprite_starting_screen(sfRenderWindow *window, sfSprite **sprite);
//starting_screen_animation.c
void gayardos_trainer_anim(sfSprite **pokemon, int index);
void ohoh_anim(sfSprite **pokemon, int index);
void blinking_space(sfText **text, int index);
void gayardos_rider_movement(sfSprite **sprite, int index);
void ohoh_movement(sfSprite **sprite, int index);
//game.c
void game_screen(game *game);
void time_management_game_screen(time *time, sprite *sprite, text *text
    , game *game);
void render_game_screen(game *game, sprite *sprite, text text, sound sound);
void event_game_screen(game *game, sprite *sprite, sound sound);
void end_game_screen(game *game);
//game_element.c
sprite sprite_game_screen(void);
sound sound_game_screen(void);
text text_game_screen(void);
void render_sprite_game_screen(sfRenderWindow *window, sfSprite **sprite);
void click_management_game_screen(time *time, sprite *sprite
    , game *game, sound sound);
//game_element_2.c
void sprite_game_screen_2(sprite *sprite);
void time_management_game_screen_2(time *time, sprite *sprite, text *text
    , game *game);
void sound_game_screen_2(sound *sound);
void click_management_game_screen_2(time *time, sprite *sprite
    , game *game, sound sound);
//game_animation.c
void pikachu_animation(sfSprite **pokemon, int index);
void dresseur_animation(sfSprite **pokemon, int index);
void activate_dresseur(sprite *sprite, game *game);
void charizard_animation(sfSprite **pokemon, int index);
void flash_animation(sfSprite **pokemon, int index);
//game_animation_2.c
void activate_flash(sprite *sprite, game *game);
void smoke_animation(sfSprite **pokemon, int index);
void activate_smoke(sprite *sprite, game *game);
void escargot_animation(sfSprite **pokemon, int index);
void tiplouf_animation(sfSprite **pokemon, int index);
//game_animation_3.c
void snorlax_animation(sfSprite **pokemon, int index);
void water_splash_animation(sfSprite **pokemon, int index);
void activate_splash(sprite *sprite, game *game);
//game_movement.c
void pikachu_movement(sfSprite **sprite, int index);
void ohoh_movement_game(sfSprite **sprite, int index);
void charizard_movement_game(sfSprite **sprite, int index);
void pokeball_movement_game(sfSprite **sprite, int index, sfVector2i target);
void escargot_movement(sfSprite **sprite, int index);
//game_movement_2.c
void tiplouf_movement(sfSprite **sprite, int index);
void snorlax_movement(sfSprite **sprite, int index, game *game);
//game_action.c
void cursor_position(game *game, sprite *sprite, int index);
void catch_pokemon(game *game, sprite *sprite, sound sound);
int pokemon_hit_score(game *game, sfSprite *sprite_po
    , int *score_hit, sprite *flash);
void timer_spawn(game *game, sprite *sprite, sound *sound, time *time);
void catch_pokemon_2(game *game, sprite *sprite, sound sound, int *score);
//game_spawn.c
void spawn_pikachu_right(sfSprite *sprite);
void spawn_ohoh_left(sfSprite *sprite);
void spawn_charizard_right(sfSprite *sprite);
void spawn_escargot_left(sfSprite *sprite);
//game_spawn_2.c
void spawn_tiplouf_left(sfSprite *sprite);
void spawn_snorlax_top(sfSprite *sprite);
//credit.c
void credit_screen(game *game);
void time_management_credit_screen(time *time, sprite *sprite, text *text
    , game *game);
void render_credit_screen(game *game, sprite sprite, text text);
void close_credit_screen(game *game);
void end_credit_screen(game *game);
//credit_element.c
sprite sprite_credit_screen(void);
sound sound_credit_screen(game *game);
text text_credit_screen(game game);
void text_credit_screen_2(game game, text *text, int score);
void render_sprite_credit_screen(sfRenderWindow *window, sfSprite **sprite);
//credit_movement.c
void movement_credit(sfSprite **sprite, int index);
//credit_animation.c
void snorlax_credit_animation(sfSprite **pokemon, int index);
void oh_ho_credit_animation(sfSprite **pokemon, int index);
//sprite_1.c
void backgrounf_normal(sprite *sprite, int index);
void logo(sprite *sprite, int index);
void sublogo(sprite *sprite, int index);
void gayardos_trainer(sprite *sprite, int index);
void ohoh(sprite *sprite, int index);
//sprite_2.c
void trainer(sprite *sprite, int index);
void backgrounf_dark(sprite *sprite, int index);
void mouse_cursor(sprite *sprite, int index);
void pikachu_running(sprite *sprite, int index);
void charizard(sprite *sprite, int index);
//sprite_3.c
void flash(sprite *sprite, int index);
void pokeball(sprite *sprite, int index);
void background_hide(sprite *sprite, int index);
void smoke(sprite *sprite, int index);
void escargot(sprite *sprite, int index);
//sprite_4.c
void tiplouf(sprite *sprite, int index);
void snorlax(sprite *sprite, int index);
void background_hide_water(sprite *sprite, int index);
void water_splash(sprite *sprite, int index);
void pikachu_running_credit(sprite *sprite, int index);
//sprite_5.c
void tiplouf_credit(sprite *sprite, int index);
void escargot_credit(sprite *sprite, int index);
void snorlax_credit(sprite *sprite, int index);
void gayardos_credit(sprite *sprite, int index);
void charizard_credit(sprite *sprite, int index);
//sprite_6.c
void ohoh_credit(sprite *sprite, int index);
//sound_1.c
void create_music(char *song, sound *sound_st, int index);
void create_sound(char *song, sound *sound_st, int index);
//text.c
void create_text(char *content, char *path_font, text *text, int index);
void change_score(int score, sfText *text);
//time.c
time create_time(int size);
void initialize_time(time *time);
//timer.c
char *int_to_str(long long nbr);
int power_ten(int nbr);
char *combine_str(char *str1, char *str2);
void change_timer(int *timer, sfText *text);
//destroy.c
void destroy_screen(sprite *sprite, text *text, sound *sound, time *time);
void destroy_clock(time *time);
void destroy_sprite(sprite *sprite);
void destroy_sound(sound *sound);
void destroy_text(text *text);
//print_error.c
int my_putstr_error(char const *str);
int my_putstr(char const *str);
int my_strlen(const char *str);
int help(char *str);

#endif
