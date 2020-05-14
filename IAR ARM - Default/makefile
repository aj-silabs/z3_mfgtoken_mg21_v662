################################################################################
# Automatically-generated file. Do not edit!
################################################################################

export WINEDEBUG=-all

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include zll-utility-server/subdir.mk
-include zll-scenes-server/subdir.mk
-include zll-on-off-server/subdir.mk
-include zll-level-control-server/subdir.mk
-include zll-identify-server/subdir.mk
-include zll-commissioning-server/subdir.mk
-include zll-commissioning-common/subdir.mk
-include zcl-framework-core/subdir.mk
-include update-tc-link-key/subdir.mk
-include strong-random/subdir.mk
-include simple-main/subdir.mk
-include serial/EFR32/subdir.mk
-include serial/subdir.mk
-include scenes/subdir.mk
-include scan-dispatch/subdir.mk
-include reporting/subdir.mk
-include on-off/subdir.mk
-include nvm3/EFR32/subdir.mk
-include nvm3/subdir.mk
-include network-steering/subdir.mk
-include network-creator-security/subdir.mk
-include network-creator/subdir.mk
-include mbedtls/EFR32/subdir.mk
-include manufacturing-library-cli/subdir.mk
-include level-control/subdir.mk
-include interpan/subdir.mk
-include identify/subdir.mk
-include heartbeat/subdir.mk
-include hal-library/EFR32/subdir.mk
-include groups-server/subdir.mk
-include green-power-common/subdir.mk
-include green-power-client/subdir.mk
-include find-and-bind-target/subdir.mk
-include external-generated-files/subdir.mk
-include emlib/subdir.mk
-include emdrv/subdir.mk
-include ember-minimal-printf/subdir.mk
-include efr32/subdir.mk
-include debug-jtag/EFR32/subdir.mk
-include debug-basic-library/EFR32/subdir.mk
-include counters/subdir.mk
-include color-control-server/subdir.mk
-include coexistence-stub/EFR32/subdir.mk
-include ccm-encryption/subdir.mk
-include basic/subdir.mk
-include antenna-stub/subdir.mk
-include aes-cmac/subdir.mk
-include adc/EFR32/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(MSA_UPPER_DEPS)),)
-include $(MSA_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S79_DEPS)),)
-include $(S79_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(MSA_DEPS)),)
-include $(MSA_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(S79_UPPER_DEPS)),)
-include $(S79_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: pre-build main-build

# Main-build Target
main-build: z3_mfgtoken_mg21_v662.out

# Tool invocations
z3_mfgtoken_mg21_v662.out: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: IAR Linker for ARM'
	@echo 'Adding linker inputs to ilinkCommandLine_z3_mfgtoken_mg21_v662.out.xcl'
	echo. $(foreach file,$(OBJS), $(file)) >> ilinkCommandLine_z3_mfgtoken_mg21_v662.out.xcl
	echo. $(foreach file,$(USER_OBJS), $(file)) >> ilinkCommandLine_z3_mfgtoken_mg21_v662.out.xcl
	@echo 'Invoking linker reading args from file: ilinkCommandLine_z3_mfgtoken_mg21_v662.out.xcl'
	ilinkarm -f "C:\Users\alji\SimplicityStudio\v4_workspace\z3_mfgtoken_mg21_v662\IAR ARM - Default\ilinkCommandLine_z3_mfgtoken_mg21_v662.out.xcl" 
	ielftool --srec --verbose "z3_mfgtoken_mg21_v662.out" "z3_mfgtoken_mg21_v662.s37"  
	ielftool --ihex --verbose "z3_mfgtoken_mg21_v662.out" "z3_mfgtoken_mg21_v662.hex"  
	ielftool --bin --verbose "z3_mfgtoken_mg21_v662.out" "z3_mfgtoken_mg21_v662.bin"
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(ASM_UPPER_DEPS)$(MSA_UPPER_DEPS)$(EXECUTABLES)$(OBJS)$(ASM_DEPS)$(S79_DEPS)$(S_DEPS)$(S_UPPER_DEPS)$(MSA_DEPS)$(C_DEPS)$(S79_UPPER_DEPS) z3_mfgtoken_mg21_v662.out
	-@echo ' '

pre-build:
	-cmd //c 'C:\Users\alji\SIMPLI~1\V4_WOR~1\Z3_MFG~1/z3_mfgtoken_mg21_v662-prebuild.bat' 'z3_mfgtoken_mg21_v662' 'C:/Users/alji/SimplicityStudio/v4_workspace/z3_mfgtoken_mg21_v662' 'C:/Program Files (x86)/IAR Systems/Embedded Workbench 8.2/arm' 'C:\SiliconLabs\SimplicityStudio\v4_2'
	-@echo ' '

post-build:
	-cmd //c 'C:\Users\alji\SIMPLI~1\V4_WOR~1\Z3_MFG~1/z3_mfgtoken_mg21_v662-postbuild.bat' 'z3_mfgtoken_mg21_v662' 'C:/Users/alji/SimplicityStudio/v4_workspace/z3_mfgtoken_mg21_v662' 'C:/Program Files (x86)/IAR Systems/Embedded Workbench 8.2/arm' 'C:\SiliconLabs\SimplicityStudio\v4_2'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: main-build pre-build post-build

-include ../makefile.targets
