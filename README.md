# pinentry-dmenu

pinentry-dmenu is a pinentry program based on dmenu.

This program is a fork from https://gitgud.io/zavok/spine.git
which is also a fork from https://tools.suckless.org/dmenu.

## Requirements

In order to build dmenu you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

```bash
make clean install
```

## Running pinentry-dmenu

See the man page for details.

## Manual

You can view the manual by running `man pinentry-dmenu`
or `man pinentry-dmenu.1`, if you've already ran `make clean install`.
