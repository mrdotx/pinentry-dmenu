/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by pinentry-dmenu.conf */

static unsigned int mon = -1;
static unsigned int centerwidth = 1024;
static unsigned int embedded = 0;
static unsigned int lineheight = 24;
static unsigned int borderwidth = 1;
static unsigned int minpwlen = 32;
static unsigned int alphas[SchemeLast][2] = {
	/* values between 0 (transparent) and 255 (opaque) */
	/*          foreground, background */
	[SchemePrompt] = { 255, 255 },
	[SchemeNormal] = { 255, 230 },
	[SchemeSelect] = { 255, 255 },
	[SchemeDesc]   = { 255, 255 },
};

static const char *position = "center";
static const char *fonts[] = {
	"DejaVuSansM Nerd Font:pixelsize=16"
};
static const char *prompt = NULL;
static const char *asterisk = "*";
static const char *colors[SchemeLast][2] = {
	/*                foreground, background */
	[SchemePrompt] = { "#cccccc", "#4185d7" },
	[SchemeNormal] = { "#cccccc", "#000000" },
	[SchemeSelect] = { "#ffffff", "#4185d7" },
	[SchemeDesc]   = { "#cccccc", "#4185d7" },
};
