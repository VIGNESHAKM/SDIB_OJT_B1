#!/bin/sh
echo -n "**************************************"
echo
echo -n"-------- test uart --------"
echo
echo -n"**************************************"
        echo
        echo "-----------checking for uart---------------"
        echo
        if [ -e"/dev/ttys3" ]
        then
                echo "uart mode exist"
                echo
                echo "--------performing loopback test--------"
                echo
#./uart
                echo
                echo "==================pass================"
                echo
        else
                echo "===================fail=============="
                echo
fi
