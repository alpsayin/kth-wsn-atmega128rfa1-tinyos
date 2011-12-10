#!/bin/bash

cd ~/kth-wsn-atmega128rfa1-tinyos/

cd SensorAppC/src/

cp -f ~/workspace/aa/src/* ~/kth-wsn-atmega128rfa1-tinyos/SensorAppC/src/

svn add *

cd ../../

svn commit
