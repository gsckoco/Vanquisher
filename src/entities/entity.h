typedef struct entity
{
	void (*update)(void); // Every frame
	void (*init)(/* Anything that is needed upon creation */); // On creation
	void (*del)(void); // On deletion
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