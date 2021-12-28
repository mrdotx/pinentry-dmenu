#!/bin/sh

# path:   /home/klassiker/.local/share/repos/pinentry-dmenu/test.sh
# author: klassiker [mrdotx]
# github: https://github.com/mrdotx/pinentry-dmenu
# date:   2021-12-28T19:18:10+0100

prompt="SETTITLE title
SETPROMPT prompt
SETDESC PROMPT
GETPIN"

confirm="SETTITLE title
SETPROMPT confirm
SETDESC CONFIRM
confirm"

repeat="SETTITLE title
SETPROMPT prompt
SETDESC REPEAT
SETREPEAT repeat
GETPIN"

case $1 in
    1)
        printf "%s\nBYE" "$prompt" \
            | ./pinentry-dmenu
        ;;
    2)
        printf "%s\nBYE" "$confirm" \
            | ./pinentry-dmenu
        ;;
    3)
        printf "%s\nBYE" "$repeat" \
            | ./pinentry-dmenu
        ;;
    *)
        printf "%s\n%s\n%s\nBYE" "$prompt" "$confirm" "$repeat" \
            | ./pinentry-dmenu
        ;;
esac
