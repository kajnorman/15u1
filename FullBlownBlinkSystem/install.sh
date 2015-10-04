#!/bin/bash
sudo cp initblink.sh /etc/init.d/blink
sudo chmod 755 /etc/init.d/blink
sudo cp blink /usr/bin/blink
sudo update-rc.d  blink defaults
sudo service blink start
sudo service blink status
sudo cp blinkcontrolcgi.sh /usr/lib/cgi-bin/blink
echo 0 > /tmp/num
chmod 666 /tmp/num

