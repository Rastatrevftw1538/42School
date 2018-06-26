FT_LINE1=8
FT_LINE2=16

cat /etc/passwd | grep -v '#' | sed -n "n;p" | cut -d ":" -fl | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | paste -sd "," - | sed 's/,/, /g' | sed 's/$/./'
