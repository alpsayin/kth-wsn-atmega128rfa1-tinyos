#!/bin/bash

#svn checkout https://kth-wsn-atmega128rfa1-tinyos.googlecode.com/svn/trunk/ ~/kth-wsn-atmega128rfa1-tinyos --username xxxxxxx@gmail.com
svn checkout http://kth-wsn-atmega128rfa1-tinyos.googlecode.com/svn/trunk/ kth-wsn-atmega128rfa1-tinyos

NOWDATE=`date +%F_%R`

sudo mkdir -p /opt/tinyos-main/src/tinyos-main/backup/tos_${NOWDATE}_Backup

cd /opt/tinyos-main/src/tinyos-main/backup/tos_${NOWDATE}_Backup

sudo mkdir chips/
sudo mkdir platforms/

sudo mv /opt/tinyos-main/src/tinyos-main/tos/chips/atm128 ./chips/
sudo mv /opt/tinyos-main/src/tinyos-main/tos/chips/atm1281 ./chips/
sudo mv /opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1 ./chips/

sudo mv /opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1 ./platforms/

cd /opt/tinyos-main/src/tinyos-main/tos/

sudo cp -r ~/kth-wsn-atmega128rfa1-tinyos/modified-tinyos-main/tos/chips/* ./chips/
sudo cp -r ~/kth-wsn-atmega128rfa1-tinyos/modified-tinyos-main/tos/platforms/* ./platforms/

cp -f /home/zn/kth-wsn-atmega128rfa1-tinyos/SensorAppC/src/* /home/zn/workspace/aa/src/
cp -f /home/zn/kth-wsn-atmega128rfa1-tinyos/packet_types.h /home/zn/workspace/aa/src/
