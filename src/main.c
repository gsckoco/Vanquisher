#include "main.h"
#include "entities/entity.h"

void __init(Entity * self, char * thing) {
    self->name = thing;
}

void __update(Entity * self) {
    printf("A: %s" , self->name);
}

LastEntity *last = NULL;

int main(void)
{
    int i = 0;
    for (i=0; i<100; i++) {
        LastEntity nL;
        Entity *e;
        e->init = __init;
        e->update = __update;
        e->init(e,"Name"+i);
        //printf("Num %d\n", i);
        nL.cur = e;
        nL.last = last;
        last = &nL;
    }
    int l = 0;
    LastEntity *lastInLoop = last;
    while (l == 0) {
        lastInLoop->cur->update(lastInLoop->cur);
        lastInLoop = lastInLoop->last;
        
    }
}
