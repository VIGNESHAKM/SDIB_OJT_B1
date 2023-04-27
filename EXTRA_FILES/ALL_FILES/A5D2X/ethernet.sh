#!/bin/bash

echo "**************"
echo
echo "---------- TEST Ethernet -----------------"
echo
echo "***************"

if udhcpc -i eth0 ; then
    echo "eth0 interface configured successfully"
    echo "carrier status:"
    cat /sys/class/net/eth0/carrier
    echo "========= press ctrl+c to stop pinging ========"

    ping google.com

    echo
    echo "============= PASS ==============="
    echo
else
    echo "Failed to configure eth0 interface"
    echo "============= FAIL =============="
fi
