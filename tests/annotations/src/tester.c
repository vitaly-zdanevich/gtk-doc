/**
 * SECTION:tester
 * @short_description: module for gtk-doc unit test
 *
 * This file contains non-sense code for the sole purpose of testing the docs.
 */

#include <glib.h>
#include <glib-object.h>

#include "tester.h"

/**
 * annotation_array_length:
 * @store: a #GtkListStore
 * @n_columns: number of columns
 * @types: (array length=n_columns): list of types
 *
 * Document parameter relation for array length.
 */
void
annotation_array_length (GObject *list,
                         gint          n_columns,
                         GType        *types)
{
}


/**
 * annotation_nullable:
 * @uri: a uri
 * @label: (allow-none): an optional string
 *
 * Document optional parameters.
 *
 * Returns: (transfer full) (allow-none): Returns stuff which you have to free after use
 */
gchar *
annotation_nullable (const gchar *uri,
                     const gchar *label)
{
   return NULL;
}

/**
 * annotation_elementtype:
 * @list: (element-type GObject): list of #GObject instances to search
 *
 * Document optional parameters.
 *
 * Returns: %TRUE for success
 */
gboolean
annotation_elementtype (const GList *list)
{
   return TRUE;
}
