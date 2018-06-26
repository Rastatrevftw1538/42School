ldapsearch -x -LLL "(uid= z*)" | grep "cn:" | sed "s/cn: //" | sort -f -r 
