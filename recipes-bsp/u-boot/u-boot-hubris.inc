require recipes-bsp/u-boot/u-boot.inc

DEPENDS_append += " \
	flex-native \
	bison-native \
	"

SRC_URI = "git://gitlab.denx.de/u-boot/u-boot.git;protocol=https"

S = "${WORKDIR}/git"
