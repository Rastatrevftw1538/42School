ldapsearch -x -LLL "(cn=z*)" | grep "uid:" | sed "s/uid: //" | sort -f -r
