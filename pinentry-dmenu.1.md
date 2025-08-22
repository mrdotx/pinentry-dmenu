% PINENTRY-DMENU(1) Version\-VERSION | pinentry-dmenu Manual

# NAME

pinentry-dmenu - a pinentry program based on dmenu

# SYNOPSIS

Set the **pinentry-program** in *~/.gnupg/gpg-agent.conf* to **pinentry-dmenu** to use the program as the regular dialog for **gpg-agent**.

The configuration is placed in *~/.gnupg/pinentry-dmenu.conf*. You can change the path to the config file with the environment variable *GNUPGHOME*.

# DESCRIPTION

**pinentry-dmenu** is a dmenu- and pinentry-based passphrase dialog called from the **gpg-agent**(1) daemon. It is not intended to be invoked directly.

# OPTIONS

**monitor** = *-1*
: pinentry-dmenu is displayed on the monitor number supplied. Monitor numbers are starting from 0. Value -1 for focused monitor.

**center_width** = *1024*
: Defines the width for the 'center' menu. Value -1 for full width.

**line_height** = *24*
: Defines menu line of at least 'line_height' pixels tall.

**border_width** = *1*
: Defines the border width for the menu.

**position** = *"center"*
: Defines the position of the menu. *bottom*, *center* and *top* are supported.

**embedded** = *false*
: Embed into window.

**font** = *"DejaVuSansM Nerd Font:pixelsize=16"*
: Defines the font or font set used.

**prompt** = *""*
: Defines the prompt to be displayed to the left of the input field.

**asterisk** = *"\*"*
: Defines the symbol which is showed for each typed character.

**min_password_length** = *32*
: The minimal space of the password field. This value has affect to the description field after the password field.

**prompt_fg** = *"#cccccc"*
: Defines the prompt foreground color. *#RGB*, *#RRGGBB* and X color names are supported.

**prompt_fg_alpha** = *255*
: Defines the prompt foreground alpha value. Values between *0* (transparent) and *255* (opaque) are supported.

**prompt_bg** = *"#4185d7"*
: Defines the prompt background color.

**prompt_bg_alpha** = *255*
: Defines the prompt background alpha value.

**normal_fg** = *"#cccccc"*
: Defines the normal foreground color.

**normal_fg_alpha** = *255*
: Defines the normal foreground alpha value.

**normal_bg** = *"#000000"*
: Defines the normal background color.

**normal_bg_alpha** = *230*
: Defines the normal background alpha value.

**select_fg** = *"#ffffff"*
: Defines the selected foreground color.

**select_fg_alpha** = *255*
: Defines the selected foreground alpha value.

**select_bg** = *"#4185d7"*
: Defines the selected background color.

**select_bg_alpha** = *255*
: Defines the selected background alpha value.

**desc_fg** = *"#cccccc"*
: Defines the description foreground color.

**desc_fg_alpha** = *255*
: Defines the description foreground alpha value.

**desc_bg** = *"#4185d7"*
: Defines the description background color.

**desc_bg_alpha** = *255*
: Defines the description background alpha value.

# USAGE

**pinentry-dmenu** is completely controlled by the keyboard.

**Return**
: Confirm input

**Ctrl-Return**
: Confirm input

**Shift-Return**
: Confirm input

**Escape**
: Cancel input

**C-c**
: Escape

***Confirm Mode***

**Down**
: Right

**End**
: Right

**Home**
: Left

**Next**
: Right

**Prior**
: Left

**Up**
: Left

**g**
: Cancel input

**G**
: Cancel input

**h**
: Left

**j**
: Left

**k**
: Right

**l**
: Right

**n**
: Confirm with no

**N**
: Confirm with no

**y**
: Confirm with yes

**Y**
: Confirm with yes

***Pin Mode***

**End**
: Move cursor to the line end

**Home**
: Move cursor to the line begin

**C-a**
: Home

**C-b**
: Left

**C-d**
: Delete

**C-e**
: End

**C-f**
: Right

**C-g**
: Escape

**C-h**
: Backspace

**C-k**
: Delete line right

**C-u**
: Delete line left

**C-v**
: Paste from primary X selection

# EXAMPLES

| monitor = -1;

| center_width = 1024;
| line_height = 24;
| border_width = 1;

| position = "center";
| embedded = false;

| font = "DejaVuSansM Nerd Font:pixelsize=16";
| prompt = "";
| asterisk = "\*";
| min_password_length = 32;

| prompt_fg = "#cccccc";
| prompt_fg_alpha = 255;
| prompt_bg = "#4185d7";
| prompt_bg_alpha = 255;
| normal_fg = "#cccccc";
| normal_fg_alpha = 255;
| normal_bg = "#000000";
| normal_bg_alpha = 230;
| select_fg = "#ffffff";
| select_fg_alpha = 255;
| select_bg = "#4185d7";
| select_bg_alpha = 255;
| desc_fg = "#cccccc";
| desc_fg_alpha = 255;
| desc_bg = "#4185d7";
| desc_bg_alpha = 255;

# BUGS

See GitHub Issues: *https://github.com/mrdotx/pinentry-dmenu/issues*

# AUTHORS

| **pinentry-dmenu** is a fork of **dmenu** <*https://tools.suckless.org/dmenu*> and uses the api of **pinentry**, a GnuPG tool.
| **pinentry-dmenu** was written by mrdotx <*klassiker@gmx.de*>

# SEE ALSO

**dmenu**(1), **dwm**(1), **gpg-agent**(1)

# LICENSE

See the *LICENSE.md* file for the terms of redistribution.
