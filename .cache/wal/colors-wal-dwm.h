static const char norm_fg[] = "#eddff0";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#a59ca8";

static const char sel_fg[] = "#eddff0";
static const char sel_bg[] = "#623ABE";
static const char sel_border[] = "#eddff0";

static const char urg_fg[] = "#eddff0";
static const char urg_bg[] = "#570F9D";
static const char urg_border[] = "#570F9D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
