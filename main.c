#include<curses.h>

int main() {
  int screen_width = 40;
int screen_height = 20;
//initailize screen
WINDOW *win = initscr();

// take player input
keypad(win, true);
nodelay(win, true);
curse_set(0);

//snake
vec2 head = {0,0};
vec2 dir = {1,0};

while(true) {
int pressed = wgetch(win);
if(pressed = KEY_LEFT) {
dir.x = -1;
dir.y = 0;
}
if(pressed = KEY_RIGHT)}
dir.x = -1;
dir.y = 0;
}
if(pressed = KEY_UP) {
dir.x = 0;
dir.y = -1;
}
if(pressed = KEY_DOWN) {
dir.x = 0;
dir.y = 1;
}
if (pressed ='\e') {
break;
}
head.x += dir.x;
head.y += dir.y;
// -----draw-----
erase();
mvaddch(head.y, head.x *2, '0');
usleep(125000);
  }
endwin();

  




