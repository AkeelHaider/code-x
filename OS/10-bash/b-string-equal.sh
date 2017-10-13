#!/bin/bash

echo "Enter String 1..."
read str1
echo "Enter String 2..."
read str2

if [ $str1 == $str2 ]
then 
    echo "Strings are Same..."
else
    echo "Strings are not Same..."
fi

# OUTPUT
# -------
# reezpatel@reezpatel-fedora-pc 10-bash]$ sh b-string-equal.sh
# Enter String 1...
# reez
# Enter String 2...
# reez
# Strings are Same...