// Text Color
#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7

// Text Bright Color
#define LIGHT_BLACK 8
#define LIGHT_RED 9
#define LIGHT_GREEN 10
#define LIGHT_YELLOW 11
#define LIGHT_BLUE 12
#define LIGHT_MAGENTA 13
#define LIGHT_CYAN 14
#define LIGHT_WHITE 15

// Text Styles
#define RESET -1
#define BRIGHT 1
#define UNDERLINE 4

void text_color(color) { // Changer la couleur du texte
	if ((color >= 0) && (color <= 7)) 
		printf("\033[%dm", 30 + color);
	else if ((color >= 8) && (color <= 15)) 
		printf("\033[%dm", 82 + color);
	else 
		printf("\033[39m");
}

void text_background(color) { // Changer la couleur du texte
	if ((color >= 0) && (color <= 7)) 
		printf("\033[%dm", 40 + color);
	else if ((color >= 8) && (color <= 15)) 
		printf("\033[%dm", 92 + color);
	else 
		printf("\033[49m");
}

void color(text, background) {
	text_color(text);
	text_background(background);
}

void text_style(style) {
	if ((style >= 1) && (style <= 5))
		printf("\033[%dm", style);
	else if (style == -1)
		printf("\033[0m");
}

void reset() {
	printf("\033[39m");
	printf("\033[49m");
	printf("\033[0m");
}