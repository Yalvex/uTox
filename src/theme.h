enum {
    THEME_DEFAULT,
    THEME_LIGHT,
    THEME_DARK,
    THEME_HIGHCONTRAST,
    THEME_CUSTOM,
    THEME_ZENBURN, // !!!!
    // @TODO
    // THEME_XRESOURCE
};

/* Colors for drawing the backgrounds */
uint32_t COLOR_BACKGROUND_MAIN;
uint32_t COLOR_BACKGROUND_ALT;
uint32_t COLOR_BACKGROUND_AUX;
uint32_t COLOR_BACKGROUND_MENU;
uint32_t COLOR_BACKGROUND_MENU_HOVER;
uint32_t COLOR_BACKGROUND_MENU_ACTIVE;
uint32_t COLOR_BACKGROUND_LIST;
uint32_t COLOR_BACKGROUND_LIST_HOVER;

uint32_t COLOR_MAIN_TEXT;
uint32_t COLOR_MAIN_CHATTEXT;
uint32_t COLOR_MAIN_SUBTEXT;
uint32_t COLOR_MAIN_ACTIONTEXT;
uint32_t COLOR_MAIN_QUOTETEXT;
uint32_t COLOR_MAIN_REDTEXT;
uint32_t COLOR_MAIN_URLTEXT;
uint32_t COLOR_MAIN_HINTTEXT;
uint32_t COLOR_MENU_TEXT;
uint32_t COLOR_MENU_SUBTEXT;
uint32_t COLOR_MENU_ACTIVE_TEXT;
uint32_t COLOR_LIST_TEXT;
uint32_t COLOR_LIST_SUBTEXT;
uint32_t COLOR_AUX_EDGE_NORMAL;
uint32_t COLOR_AUX_EDGE_HOVER;
uint32_t COLOR_AUX_EDGE_ACTIVE;
uint32_t COLOR_AUX_TEXT;
uint32_t COLOR_AUX_ACTIVEOPTION_BACKGROUND;
uint32_t COLOR_AUX_ACTIVEOPTION_TEXT;
uint32_t COLOR_GROUP_SELF;
uint32_t COLOR_GROUP_PEER;
uint32_t COLOR_GROUP_AUDIO;
uint32_t COLOR_GROUP_MUTED;
uint32_t COLOR_SELECTION_BACKGROUND;
uint32_t COLOR_SELECTION_TEXT;
uint32_t COLOR_EDGE_NORMAL;
uint32_t COLOR_EDGE_ACTIVE;
uint32_t COLOR_EDGE_HOVER;
uint32_t COLOR_ACTIVEOPTION_BACKGROUND;
uint32_t COLOR_ACTIVEOPTION_TEXT;
uint32_t COLOR_STATUS_ONLINE;
uint32_t COLOR_STATUS_AWAY;
uint32_t COLOR_STATUS_BUSY;
uint32_t COLOR_BUTTON_SUCCESS_BACKGROUND;
uint32_t COLOR_BUTTON_SUCCESS_TEXT;
uint32_t COLOR_BUTTON_SUCCESS_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_SUCCESS_HOVER_TEXT;
uint32_t COLOR_BUTTON_WARNING_BACKGROUND;
uint32_t COLOR_BUTTON_WARNING_TEXT;
uint32_t COLOR_BUTTON_WARNING_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_WARNING_HOVER_TEXT;
uint32_t COLOR_BUTTON_DANGER_BACKGROUND;
uint32_t COLOR_BUTTON_DANGER_TEXT;
uint32_t COLOR_BUTTON_DANGER_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_DANGER_HOVER_TEXT;
uint32_t COLOR_BUTTON_DISABLED_BACKGROUND;
uint32_t COLOR_BUTTON_DISABLED_TEXT;
uint32_t COLOR_BUTTON_DISABLED_HOVER_BACKGROUND;
uint32_t COLOR_BUTTON_DISABLED_TRANSFER;
uint32_t COLOR_BUTTON_INPROGRESS_BACKGROUND;
uint32_t COLOR_BUTTON_INPROGRESS_TEXT;
uint32_t COLOR_BUTTON_DISABLED_FOREGROUND;
uint32_t COLOR_BUTTON_INPROGRESS_FOREGROUND;

void theme_load(char loadtheme);
void read_custom_theme(const char *path);

uint32_t status_color[4];

uint32_t theme;

extern const char *COLOUR_NAME_TABLE[];
extern uint32_t *COLOUR_POINTER_TABLE[];