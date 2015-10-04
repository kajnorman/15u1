#!/bin/bash

echo "Content-type: text/html"
echo ""

echo '<html>'
echo '<head>'
echo '<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">'
echo '<title>Form Example</title>'
echo '</head>'
echo '<body>'

  echo "<form method=GET action=\"${SCRIPT}\">"\


  echo '<br><input name="button" type="submit" value="on">'\
       '<input name="button" type="submit" value="off">'\
       '</form>'


echo '<p>'


  if [ -z "$QUERY_STRING" ]; then
        exit 0
  else
     BUTTON=`echo "$QUERY_STRING" | sed -n 's/^.*button=\([^&]*\).*$/\1/p' | sed "s/%20/ /g"`
  fi
  if [ $BUTTON == "on" ]; then
	echo 2 > /tmp/cmd.txt
	NUM=$(cat /tmp/num)
	echo $((NUM+=1)) > /tmp/num
	echo The ON-button is used $NUM times. 
  fi
  if [ $BUTTON == "off" ]; then
	echo 1 > /tmp/cmd.txt
  fi
echo '</body>'
echo '</html>'

exit 0

