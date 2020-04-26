/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

/* -p  option; prompt to the left of input field */
static const char *prompt      = NULL;

static const char *colors[SchemeLast][2] = {
	/* [Scheme] = { fg, bg }	      */
	[SchemeNorm] = { "#00FFFF", "#FFFFFF" },
	[SchemeSel] = { "#00FFFF", "#FFFFFF" },
	[SchemeSelHighlight] = { "#C4A000", "#3F0937" },
	[SchemeNormHighlight] = { "#C4A000", "#080010" },
	[SchemeOut] = { "#000000", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 4;

/* Characters not considered part of a word while deleting words f.e: " /?\"&[]" */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;

/* Use prefix matching by default; can be inverted with the -x flag */
static int use_prefix = 0;
