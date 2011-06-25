#ifndef ASTEROIDS_ENTITYREPRESENTATIONMANAGER_H_
#define ASTEROIDS_ENTITYREPRESENTATIONMANAGER_H_

#include <map>
#include "eventlistener.h"

class EntityRepresentation;

class EntityRepresentationManager: public EventListener {
public:
    EntityRepresentationManager();
    virtual ~EntityRepresentationManager();

    virtual void onEvent(Event_t eventType, int param1, int param2, void* extra);
    EntityRepresentation* getRepresentation(int id);

private:
    std::map<int, EntityRepresentation*> mEntityRepresentations;

};

#endif  // ASTEROIDS_ENTITYREPRESENTATIONMANAGER_H_