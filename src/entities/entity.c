#include "entity.h"
#include <stdio.h>

void __e_update(Entity *self)
{
    printf("update undefined.");
}
void __e_init(Entity *self)
{
    printf("init undefined.");
}
void __e_del(Entity *self)
{
    printf("del undefined.");
}

void entity_init(Entity * ent)
{
    ent->update = __e_update;
    ent->init = __e_init;
    ent->del = __e_del;
}