#!/bin/bash

echo "Enter a Numebr: "
read n

temp=$n
fact=1

while [ $n -gt 0 ]
do
    fact=`expr $fact "*" $n`
    n=`expr $n - 1`
done

echo "Factorial of $temp is $fact" 

# OUTPUT
# -------
# [reezpatel@reezpatel-fedora-pc 10-bash]$ sh d-factorial.sh
# Enter a Numebr:
# 12
# Factorial of 12 is 479001600
# [reezpatel@reezpatel-fedora-pc 10-bash]$ sh d-factorial.sh
# Enter a Numebr:
# 5
# Factorial of 5 is 120
# [reezpatel@reezpatel-fedora-pc 10-bash]$ sh d-factorial.sh
# Enter a Numebr:
# 6
# Factorial of 6 is 720