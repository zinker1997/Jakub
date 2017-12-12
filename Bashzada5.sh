#!/bin/bash
cut -d: -f1 /etc/passwd |awk '{print length, $0}'|sort -n|tr -d 0123456789 > Hejt.txt

head -1 Hejt.txt
tail -1 Hejt.txt
