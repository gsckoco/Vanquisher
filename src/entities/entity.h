typedef struct entity
{
	void (*update)(struct entity *self); // Every frame
	void (*init)(struct entity *self, char * anything/* Anything that is needed upon creation */); // On creation
	void (*del)(struct entity *self); // On deletion
	char * name;
} Entity;

typedef struct lastEntity
{
	Entity * cur; // Current Entity in list
	struct lastEntity * last;
} LastEntity;

void __e_update();
void __e_init();
void __e_del();

void entity_init(Entity * ent);