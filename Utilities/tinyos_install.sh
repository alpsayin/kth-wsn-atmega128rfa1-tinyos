#
#	Alp Sayin
#	alp_sayin[at]ieee[dot]org	
#	02/11/2011
#	KTH Royal Institute of Technology
#
#	Notes:
#	If you have a distrubution other than maverick(10.10) change the first line according to your release name
#

sudo su -c 'echo "deb http://tinyos.stanford.edu/tinyos/dists/ubuntu maverick main" >> /etc/apt/sources.list'

cd $HOME/
mkdir -p tinyos_workspace
cd tinyos_workspace


sudo apt-get update
sudo apt-get --yes --force-yes upgrade
sudo apt-get --yes --force-yes install g++
sudo apt-get --yes --force-yes install flex
sudo apt-get --yes --force-yes install bison
sudo apt-get --yes --force-yes install python
sudo apt-get --yes --force-yes install python-dev
sudo apt-get --yes --force-yes install subversion	
sudo apt-get --yes --force-yes install automake
sudo apt-get --yes --force-yes install git

sudo apt-get --yes --force-yes install avr-binutils-tinyos
sudo apt-get --yes --force-yes install nesc
sudo apt-get --yes --force-yes install deputy-tinyos

####################################################################################
#svn checkout and build is apparently more stable... actually makes sense :)
#sudo apt-get --yes --force-yes install tinyos-2.1.1
#sudo mkdir -p /opt/tinyos-2.1.1/src
####################################################################################

sudo rm -rf /opt/tinyos-main

# Uses the main tinyos project
#sudo svn checkout http://tinyos-main.googlecode.com/svn/trunk/ /opt/tinyos-main/src/tinyos-main

# Uses the philip sommer's branch (better for rfa1)
sudo git clone git://github.com/phsommer/tinyos-main.git /opt/tinyos-main/src/tinyos-main

cd /opt/tinyos-main/src/tinyos-main/tools
sudo ./Bootstrap
sudo ./configure --prefix=/opt/tinyos-main
sudo make all
sudo make install

cd $HOME/tinyos_workspace

cp -R /opt/tinyos-main/src/tinyos-main/apps $HOME/tinyos_workspace
export user=`eval whoami`
echo $user
sudo chown -R $user:$user $HOME/tinyos_workspace/apps


#######################################################################################################################################
# Using git instead
#wget https://github.com/phsommer/tinyos-main/zipball/master --output-document phsommer.zip
#unzip phsommer.zip
#######################################################################################################################################

#sudo rm -rf tinyos-phsommer
#git clone git://github.com/phsommer/tinyos-main.git tinyos-phsommer

#######################################################################################################################################
# Apparently these files were equal, so no need to change them :)
#sudo mv /opt/tinyos-main/src/tinyos-main/support/make/Makedefaults /opt/tinyos-main/src/tinyos-main/support/make/Makedefaults.bak
#sudo mv /opt/tinyos-main/src/tinyos-main/support/make/Makefile /opt/tinyos-main/src/tinyos-main/support/make/Makefile.bak
#sudo mv /opt/tinyos-main/src/tinyos-main/support/make/Makerules /opt/tinyos-main/src/tinyos-main/support/make/Makerules.bak

#sudo cp phsommer-tinyos-main-*/support/make/rcb128rfa1.target /opt/tinyos-main/src/tinyos-main/support/make/
#sudo cp phsommer-tinyos-main-*/support/make/Makerules /opt/tinyos-main/src/tinyos-main/support/make/
#sudo cp phsommer-tinyos-main-*/support/make/Makedefaults /opt/tinyos-main/src/tinyos-main/support/make/
#######################################################################################################################################

#sudo mv /opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1 /opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1.bak
#sudo cp -r tinyos-phsommer/tos/chips/atm128rfa1 /opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1

#sudo cp tinyos-phsommer/support/make/rcb128rfa1.target /opt/tinyos-main/src/tinyos-main/support/make/
#sudo cp tinyos-phsommer/support/make/Makefile /opt/tinyos-main/src/tinyos-main/support/make/
#sudo cp -R tinyos-phsommer/tos/platforms/rcb128rfa1 /opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1

#rm -rf tinyos-phsommer

# Changing the python version in simulation files

sudo mv /opt/tinyos-main/src/tinyos-main/support/make/sim.extra /opt/tinyos-main/src/tinyos-main/support/make/sim.extra.bak
sudo mv /opt/tinyos-main/src/tinyos-main/support/make/sim-fast.extra /opt/tinyos-main/src/tinyos-main/support/make/sim-fast.extra.bak
sudo mv /opt/tinyos-main/src/tinyos-main/support/make/sim-sf.extra /opt/tinyos-main/src/tinyos-main/support/make/sim-sf.extra.bak

sudo touch /opt/tinyos-main/src/tinyos-main/support/make/sim.extra
sudo touch /opt/tinyos-main/src/tinyos-main/support/make/sim-fast.extra
sudo touch /opt/tinyos-main/src/tinyos-main/support/make/sim-sf.extra

sudo su -c 'sed "s/PYTHON_VERSION ?= 2.5/PYTHON_VERSION ?= 2.6/1" /opt/tinyos-main/src/tinyos-main/support/make/sim.extra.bak >> /opt/tinyos-main/src/tinyos-main/support/make/sim.extra'
sudo su -c 'sed "s/PYTHON_VERSION ?= 2.5/PYTHON_VERSION ?= 2.6/1" /opt/tinyos-main/src/tinyos-main/support/make/sim-fast.extra.bak >> /opt/tinyos-main/src/tinyos-main/support/make/sim-fast.extra'
sudo su -c 'sed "s/PYTHON_VERSION ?= 2.5/PYTHON_VERSION ?= 2.6/1" /opt/tinyos-main/src/tinyos-main/support/make/sim-sf.extra.bak >> /opt/tinyos-main/src/tinyos-main/support/make/sim-sf.extra'

# Creating the shell for tinyos environment

touch $HOME/tinyos_shell

echo 'export PATH=$HOME/local/bin:$PATH' >> $HOME/tinyos_shell
echo 'export TOSROOT=/opt/tinyos-main/src/tinyos-main' >> $HOME/tinyos_shell
echo 'export TOSDIR=$TOSROOT/tos' >> $HOME/tinyos_shell
echo 'export MAKERULES=$TOSROOT/support/make/Makerules' >> $HOME/tinyos_shell
echo 'export CLASSPATH=$TOSROOT/support/sdk/java/tinyos.jar:.' >> $HOME/tinyos_shell
echo 'export PYTHONPATH=.:$TOSROOT/support/sdk/python:$PYTHONPATH' >> $HOME/tinyos_shell
echo 'export PATH=$TOSROOT/support/sdk/c:$PATH' >> $HOME/tinyos_shell
echo '' >> $HOME/tinyos_shell
echo 'echo ""' >> $HOME/tinyos_shell
echo 'echo "#################################"' >> $HOME/tinyos_shell
echo 'echo "#                               #"' >> $HOME/tinyos_shell
echo 'echo "#          TinyOS Shell         #"' >> $HOME/tinyos_shell
echo 'echo "#                               #"' >> $HOME/tinyos_shell
echo 'echo "#################################"' >> $HOME/tinyos_shell
echo 'echo ""' >> $HOME/tinyos_shell
echo '' >> $HOME/tinyos_shell
echo 'cd $HOME/tinyos_workspace' >> $HOME/tinyos_shell
echo 'bash' >> $HOME/tinyos_shell

chmod +x $HOME/tinyos_shell

# Creating the desktop shortcut

touch $HOME/Desktop/TinyOS_Shell.desktop

echo '#!/usr/bin/env xdg-open' >> $HOME/Desktop/TinyOS_Shell.desktop
echo '' >> $HOME/Desktop/TinyOS_Shell.desktop
echo '[Desktop Entry]' >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Version=1.0' >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Type=Application' >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Terminal=true' >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Icon[en_US]=gnome-panel-launcher' >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Name[en_US]=TinyOS Shell' >> $HOME/Desktop/TinyOS_Shell.desktop
echo "Exec=$HOME/tinyos_shell" >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Name=tinyos' >> $HOME/Desktop/TinyOS_Shell.desktop
echo 'Icon=/usr/share/pixmaps/gnome-term.png' >> $HOME/Desktop/TinyOS_Shell.desktop

chmod +x $HOME/Desktop/TinyOS_Shell.desktop

