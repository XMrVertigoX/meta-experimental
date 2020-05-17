inherit kernel

SRC_URI = " \
	git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git;branch=linux-${PV}.y \
	file://phyboard-mira-imx6-hubris.dts \
	file://peb-eval-01.dtsi \
	"

SRCREV = "${AUTOREV}"

S = "${WORKDIR}/git"

# do_unpack_defconfig() {
# 	install --target-directory=${S}/arch/arm/configs \
# 	        ${WORKDIR}/*_defconfig
# }

do_unpack_devicetree() {
	install --target-directory=${S}/arch/arm/boot/dts \
	        ${WORKDIR}/*.dts \
	        ${WORKDIR}/*.dtsi
}

# addtask do_unpack_defconfig after do_unpack before do_configure
addtask do_unpack_devicetree after do_unpack before do_configure
