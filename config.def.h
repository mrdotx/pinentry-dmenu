/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by pinentry-dmenu.conf */

static unsigned int mon = -1;
static unsigned int center = 0;
static unsigned int centerwidth = 750;
static unsigned int bottom = 0;
static unsigned int embedded = 0;
static unsigned int lineheight = 22;
static unsigned int borderwidth = 2;
static unsigned int minpwlen = 32;

static const char *fonts[] = {
	"DejaVuSansMono Nerd Font:pixelsize=16:antialias=true:autohint=true"
};
static const char *prompt = NULL;
static const char *asterisk = "*";
static const char *colors[SchemeLast][2] = {
	/*                foreground, background */
	[SchemePrompt] = { "#cccccc", "#4185d7" },
	[SchemeNormal] = { "#cccccc", "#000000" },
	[SchemeSelect] = { "#ffffff", "#4185d7" },
	[SchemeDesc]   = { "#cccccc", "#4185d7" }
};
