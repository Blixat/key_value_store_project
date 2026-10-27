#include <kv.h>

kv_t *kv_init(size_t capacity)
{

    if (capacity == 0)
    {
        return NULL;
    }

    kv_t *table = malloc(sizeof(kv_t));
    if (table == NULL)
    {
        return NULL;
    }

    table->capacity = capacity;
    table->count = 0;

    table->entries = calloc(sizeof(kv_entry_t), capacity);

    if (table->entries == NULL)
    {
        free(table);
        return NULL;
    }

    return table;
}

// Legg til disse i bunnen av din kv.c:

int kv_put(kv_t *db, const char *key, const char *value)
{
    (void)db;
    (void)key;
    (void)value;
    return 0; // Midlertidig returverdi
}

char *kv_get(kv_t *db, const char *key)
{
    (void)db;
    (void)key;
    return NULL; // Midlertidig returverdi
}

int kv_delete(kv_t *db, const char *key)
{
    (void)db;
    (void)key;
    return 0; // Midlertidig returverdi
}

void kv_free(kv_t *db)
{
    (void)db;
    // Midlertidig tom funksjon
}
