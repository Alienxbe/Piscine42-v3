#!/bin/sh

NBR1=`echo "$FT_NBR1" | sed 'y/'\''\\"?!/01234/'`
NBR2=`echo "$FT_NBR2" | sed 'y/mrdoc/01234/'`
RES=`echo "ibase=5;$NBR1+$NBR2" | bc`

echo "obase=13;$RES" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'
