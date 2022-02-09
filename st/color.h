/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    "#1f3d47", // black   //
    "#e06c75", // red     //
    "#98c379", // green   //
    "#e5c07b", // yellow  //
    "#61afef", // blue    //
    "#c678dd", // magenta //
    "#56b6c2", // cyan    //
    "#abb2bf", // white   //

    /* 8 bright colors */
    "#4d7380", // black   //
    "#EC407A", // red     //
    "#78e378", // green   //
    "#ffd242", // yellow  //
    "#0092ff", // blue    //
    "#E040FB", // magenta //
    "#67fff0", // cyan    //
    "#EEEEEE", // white   //

    /* other colors */
    [255] = 0, // ?
    "#abb2bf", // foreground / cursor
    "white",   // ?
    "#282c34", // background
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 258;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
