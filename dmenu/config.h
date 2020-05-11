/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static const unsigned int bgalpha = 0x99999999999999;
static const unsigned int fgalpha = OPAQUE;

/* -p  option; prompt to the left of input field */
static const char *prompt      = NULL;

static const char *colors[SchemeLast][2] = {
	/* [Scheme] = { fg, bg }	      */
	[SchemeNorm] = { "#00FFFF", "#000000" },
	[SchemeSel] = { "#00FFFF", "#000000" },
	[SchemeOut] = { "#000000", "#000000" },
	[SchemeSelHighlight] = { "#C4A000", "#000000" },
	[SchemeNormHighlight] = { "#FF0000", "#000000" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
	[SchemeSelHighlight] = { fgalpha, bgalpha },
	[SchemeNormHighlight] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 4;

/* Characters not considered part of a word while deleting words f.e: " /?\"&[]" */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;

/* Use prefix matching by default; can be inverted with the -x flag */
static int use_prefix = 0;
