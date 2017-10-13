#!/bin/bash

echo "Enter the File Name: "
read file

if [ -f $file ]
then
    echo "$file Exist"
else    
    echo "$file Doesn't Exist"
fi


# OUTPUT
# -------
# [reezpatel@reezpatel-fedora-pc 10-bash]$ sh c-file-text.sh
# Enter the File Name:
# demo-file
# demo-file Doesn't Exist
# [reezpatel@reezpatel-fedora-pc 10-bash]$ sh c-file-text.sh
# Enter the File Name:
# demo-file.txt
# demo-file.txt Exist