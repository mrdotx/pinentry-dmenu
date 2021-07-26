/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int mon = -1;
static int bottom = 0;
static int embedded = 0;
static int minpwlen = 32;

static unsigned int lineheight = 26;

static const char *fonts[] = {
	"DejaVuSansMono Nerd Font:pixelsize=16:antialias=true:autohint=true"
};
static const char *asterisk = "*";
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#cccccc", "#4185d7" },
	[SchemeNormal] = { "#cccccc", "#000000" },
	[SchemeSelect] = { "#ffffff", "#4185d7" },
	[SchemeDesc]   = { "#cccccc", "#4185d7" }
};
