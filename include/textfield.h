#ifndef __TINY_TEXTFIELD_H
#define __TINY_TEXTFIELD_H

struct TextField_
{
    // Buffer size in _bytes_. The textfield won't accept more input and start
    // dropping new characters.
    int     buffer_len;

    char*   buffer;

    // TODO: Horizontal scrolling.

    // Width of the widget, covers this many columns on screen.
    int     width;

    // Byte offset for now. We may need to take care of non-ascii input in the
    // future.
    int     cursor;
};

typedef struct TextField_ TextField;

int textfield_new(TextField* textfield, int buffer_len, int width);

void textfield_keypressed(TextField* textfield, int key);

void textfield_draw(TextField* textfield, int pos_x, int pos_y);

#endif
