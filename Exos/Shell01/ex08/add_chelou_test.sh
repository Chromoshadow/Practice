FT_NBR1=\\\'\?\"\\\"\'\\
echo $FT_NBR1 | tr \'\\\\\"\?\! 01234
echo $FT_NBR1+$FT_NBR2 | tr \'\\\\\"\?\! 01234 | tr mrdoc 01234
echo $(($FT_NBR1+$FT_NBR2 | tr \'\\\\\"\?\! 01234 | tr mrdoc 01234))
FT_NBR1=\\\\\'\?\"\\\\\"\'\\\\
FT_NBR1=\\\'\?\"\\\"\'\\


echo "obase=13;ibase=5;$(echo $FT_NBR1+$FT_NBR2 | tr  \\\\\'\"\?\! 10234 | tr mrdoc 01234)" | bc | tr '0123456789ABC' 'gtaio luSnemf'
