#!/bin/sh
### BEGIN INIT INFO
# Provides:          blink
# Required-Start:    $local_fs $remote_fs $network $syslog $named
# Required-Stop:     $local_fs $remote_fs $network $syslog $named
# Default-Start:     2 3 4 5
# Default-Stop:      0 1 6
# X-Interactive:     true
# Short-Description: Start/stop blink web server
### END INIT INFO
PATH=/sbin:/usr/sbin:/bin:/usr/bin
. /lib/init/vars.sh

do_start () {
        blink &
}

do_status () {
        echo "Output of ps gives"
        ps -ef|grep blink|grep -v init|grep -v  grep|grep -v service
        exit 0;
}





case "$1" in
  start|"")
        do_start
        ;;
  restart|reload|force-reload)
        echo "Error: argument '$1' not supported" >&2
        exit 3
        ;;
  stop)
        kill `ps -ef|grep blink|grep -v init|grep -v  grep|awk '{print $2}'`
        ;;
  status)
        do_status
        exit $?
        ;;
  *)
        echo "Usage: motd [start|stop|status]" >&2
        exit 3
        ;;
esac
:

