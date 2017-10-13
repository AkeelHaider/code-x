#!/bin/bash

echo "Enter 3 Numbers..."
read a b c
if [ $a -gt $b -a $a -gt $c ]; #if(a>b AND a>c)
then
    echo "$a is Greatest!!!"
elif [ "$b" -gt "$c" ]; #if(b>c)
then    
    echo "$b is Greatest!!!"
else    
    echo "$c is Greatest!!!"
fi

# OUTPUT
#--------
# reezpatel@reezpatel-fedora-pc 10-bash]$ sh a-greatest-of-3nos.sh
# Enter 3 Numbers...
# 21 22 1
# 22 is Greatest!!!