IMAGE_FEATURES_append = " \
	allow-empty-password \
	debug-tweaks \
	package-management \
	ssh-server-openssh \
	tools-debug \
	"

IMAGE_INSTALL_append = " \
	packagegroup-hubris-wifi \
	curl \
	i2c-tools \
	networkmanager \
	wget \
	"

inherit core-image
