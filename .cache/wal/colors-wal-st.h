const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#570F9D", /* red     */
  [2] = "#623ABE", /* green   */
  [3] = "#A32AFC", /* yellow  */
  [4] = "#B560DB", /* blue    */
  [5] = "#BAA5D4", /* magenta */
  [6] = "#E99FF9", /* cyan    */
  [7] = "#eddff0", /* white   */

  /* 8 bright colors */
  [8]  = "#a59ca8",  /* black   */
  [9]  = "#570F9D",  /* red     */
  [10] = "#623ABE", /* green   */
  [11] = "#A32AFC", /* yellow  */
  [12] = "#B560DB", /* blue    */
  [13] = "#BAA5D4", /* magenta */
  [14] = "#E99FF9", /* cyan    */
  [15] = "#eddff0", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#eddff0", /* foreground */
  [258] = "#eddff0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
