#include <stdbool.h>

void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);
void draw_fence(int map_width);
void draw_field(int map_length, int map_width, int one_y, int one_x);
bool check(int map_length, int map_width);
void draw_stick(int i);

void race00(int map_length, int map_width, int one_y, int one_x) {
    if (!check(map_length, map_width))
        return;
    draw_fence(map_width);
    draw_field(map_length, map_width, one_y, one_x);
    draw_fence(map_width);
}

void draw_fence(int map_width) {
    if (map_width == 1) {
        mx_printstr("<=>\n");
        return;
    }
    if (map_width == 2) {
        mx_printstr("<==>\n");
        return;
    }
    mx_printstr("<=");
    for (int i = 0; i < map_width - 2; i++) {
        mx_printchar('-');
    }
    mx_printstr("=>");
    mx_printchar('\n');
}

void draw_field(int map_length, int map_width, int one_y, int one_x) {
    for (int i = 0; i < map_length; i++) {
        draw_stick(i);
        for (int j = 0; j < map_width; j++) {
            if (one_y == i && one_x == j)
                mx_printchar('1');
            else
                mx_printchar('0');            
        }
        draw_stick(i);
        mx_printchar('\n');
    }
}

void draw_stick(int i) {
    if (i % 2 == 0)
        mx_printchar('*');
    else
        mx_printchar('+');
}

bool check(int map_length, int map_width) {
    if (map_length == 1 && map_width == 1)
        return false;
    if (map_length < 1 || map_width < 1)
        return false;
    return true;
}
