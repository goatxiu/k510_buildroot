################################################################################
#
# nncase_linux_runtime---
#
################################################################################
#https://github.com/kendryte/nncase/releases/download/v1.4.0/nncase-1.4.0.20220303-cp310-cp310-manylinux_2_24_x86_64.whl

#https://ai.b-bug.org/~wangjianxin/sdk_thin/nncase_v1.4.0.tgz
NNCASE_PIP_VD = 1.5.0.20220331
NNCASE_PIP_K510_VD = 1.5.0.20220401
NNCASE_VSTR = v1.5.0

NNCASE_LINUX_RUNTIME_SOURCE = nncase_$(NNCASE_VSTR).tgz
NNCASE_LINUX_RUNTIME_SITE = https://ai.b-bug.org/~wangjianxin/sdk_thin
NNCASE_LINUX_RUNTIME_EXTRA_DOWNLOADS = https://github.com/kendryte/nncase/releases/download/$(NNCASE_VSTR)/nncase-$(NNCASE_PIP_VD)-cp310-cp310-manylinux_2_24_x86_64.whl 
NNCASE_LINUX_RUNTIME_EXTRA_DOWNLOADS += https://github.com/kendryte/nncase/releases/download/$(NNCASE_VSTR)/nncase-$(NNCASE_PIP_VD)-cp36-cp36m-manylinux_2_24_x86_64.whl
NNCASE_LINUX_RUNTIME_EXTRA_DOWNLOADS += https://github.com/kendryte/nncase/releases/download/$(NNCASE_VSTR)/nncase-$(NNCASE_PIP_VD)-cp37-cp37m-manylinux_2_24_x86_64.whl
NNCASE_LINUX_RUNTIME_EXTRA_DOWNLOADS += https://github.com/kendryte/nncase/releases/download/$(NNCASE_VSTR)/nncase-$(NNCASE_PIP_VD)-cp38-cp38-manylinux_2_24_x86_64.whl
NNCASE_LINUX_RUNTIME_EXTRA_DOWNLOADS += https://github.com/kendryte/nncase/releases/download/$(NNCASE_VSTR)/nncase-$(NNCASE_PIP_VD)-cp39-cp39-manylinux_2_24_x86_64.whl

define NNCASE_LINUX_RUNTIME_nncase_nncase_k510_pip3_install
	( \
		nncase_iv=$$(pip3 show nncase | grep Version | cut -d: -f2);\
		nncase_k510_iv=$$(pip3 show nncase-k510 | grep Version | cut -d: -f2); \
		[ $${nncase_iv} = "$(NNCASE_PIP_VD)" ] && [ $${nncase_k510_iv} = "$(NNCASE_PIP_K510_VD)" ] && { exit 0; }; \
		py3_v=$$(python3 --version | cut -d. -f2); \
		pip3 install $(@D)/x86_64/nncase_k510-$(NNCASE_PIP_K510_VD)-py2.py3-none-manylinux_2_24_x86_64.whl;\
		nncase_iname=$(NNCASE_LINUX_RUNTIME_DL_DIR)/nncase-$(NNCASE_PIP_VD)-cp3$${py3_v}-cp3$${py3_v}-manylinux_2_24_x86_64.whl;\
		[ $${py3_v} -lt "8" ] && nncase_iname=$(NNCASE_LINUX_RUNTIME_DL_DIR)/nncase-$(NNCASE_PIP_VD)-cp3$${py3_v}-cp3$${py3_v}m-manylinux_2_24_x86_64.whl;\
		pip3 install $${nncase_iname};\
		\
	) 
endef

NNCASE_LINUX_RUNTIME_INSTALL_STAGING = YES
NNCASE_LINUX_RUNTIME_INSTALL_TARGET = NO

define NNCASE_LINUX_RUNTIME_INSTALL_STAGING_CMDS
	$(call NNCASE_LINUX_RUNTIME_nncase_nncase_k510_pip3_install)
	cp -rf $(@D)/riscv64/include/* $(STAGING_DIR)/usr/include/
	cp -rf $(@D)/riscv64/lib/*.a $(STAGING_DIR)/usr/lib/
endef

$(eval $(generic-package))
