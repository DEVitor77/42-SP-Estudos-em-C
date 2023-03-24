#!/bin/bash
cat /etc/passwd | grep -v -E "#." | sed -n "2~2p" | sed -e "s/:.*//" | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | awk '{printf "%s%s", sep, $0; sep=", "}' | awk '{printf "%s.", $0}'
