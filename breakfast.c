#include <stdio.h>

char* tea_string = "    (  )   (   )  )\r\n     ) (   )  (  (\r\n     ( )  (    ) )\r\n     _____________\r\n    <_____________> ___\r\n    |             |/ _ \\\r\n    |               | | |\r\n    |               |_| |\r\n ___|             |\\___/\r\n/    \\___________/    \\\r\n\\_____________________/\r\n";

char* breakfast_string = "         (\r\n          )\r\n     __..---..__\r\n ,-=\'  /  |  \\  `=-.\r\n:--..___________..--;\r\n \\.,_____________,./";

int main(void) {
  printf("%s\n", tea_string);
  printf("%s\n", breakfast_string);
  return 0;
}