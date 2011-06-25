#ifndef ASTEROIDS_EVENTS_H_
#define ASTEROIDS_EVENTS_H_

enum Event_t {
    EVT_SPACESHIP_SPAWN,
    EVT_ASTEROID_SPAWN,
    EVT_SPACESHIP_THRUST,
    EVT_SPACESHIP_UNTHRUST,
    EVT_SPACESHIP_RESET,
    EVT_GAME_RESTART,
    EVT_ENTITY_CREATED,
    EVT_ENTITY_DESTROYED
};

#endif  // ASTEROIDS_EVENTS_H_