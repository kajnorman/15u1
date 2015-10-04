#!/bin/bash
sudo update-rc.d  blink remove
sudo service blink stop
sudo rm /etc/init.d/blink
sudo rm /usr/bin/blink
sudo rm /usr/lib/cgi-bin/blink
rm -f /tmp/num
