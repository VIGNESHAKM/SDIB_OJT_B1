#!/bin/sh
echo "-----------test spi-------------"
echo
echo "**********************************88"
echo
echo "-----checking for spidev0.0------"
echo

if [ -e"/dev/spidev0.0" ]
then
        echo "spidev0.0 mode exist"
        echo
        echo"======performing loopback test=========="
        echo
        ./spidev0.0
        echo
        var=$(./spidev0.0)
        if [ "var" == "$var" ]
        then
        echo
        echo "------------pass-----------"
        echo
        echo "------------fail-----------"
        echo                              
fi                                        
else                                      
echo "no spidev0.0 founf"                 
fi                                        
echo "---------------spi test complete"   
