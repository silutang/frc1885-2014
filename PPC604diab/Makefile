# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
SRC_DIR := .
BUILD_ROOT_DIR := 
WS_ROOT_DIR := E:/GitHub
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/frc1885-2014

ALL_BUILD_SPECS := PPC32diab PPC32gnu PPC32sfdiab PPC32sfgnu \
	 PPC403diab PPC403gnu PPC405diab PPC405gnu \
	 PPC405sfdiab PPC405sfgnu PPC440diab PPC440gnu \
	 PPC440sfdiab PPC440sfgnu PPC603diab PPC603gnu \
	 PPC604diab PPC604gnu PPC85XXdiab PPC85XXgnu \
	 PPC85XXsfdiab PPC85XXsfgnu PPC860sfdiab PPC860sfgnu \
	 SIMLINUXdiab SIMLINUXgnu SIMNTdiab SIMNTgnu \
	 SIMSPARCSOLARISdiab SIMSPARCSOLARISgnu
ENABLED_BUILD_SPECS := $(ALL_BUILD_SPECS)

ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32diab_DEBUG
else
OBJ_DIR := PPC32diab
endif
endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32gnu_DEBUG
else
OBJ_DIR := PPC32gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32sfdiab_DEBUG
else
OBJ_DIR := PPC32sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32sfgnu_DEBUG
else
OBJ_DIR := PPC32sfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC403diab_DEBUG
else
OBJ_DIR := PPC403diab
endif
endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC403gnu_DEBUG
else
OBJ_DIR := PPC403gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405diab_DEBUG
else
OBJ_DIR := PPC405diab
endif
endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405gnu_DEBUG
else
OBJ_DIR := PPC405gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405sfdiab_DEBUG
else
OBJ_DIR := PPC405sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405sfgnu_DEBUG
else
OBJ_DIR := PPC405sfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440diab_DEBUG
else
OBJ_DIR := PPC440diab
endif
endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440gnu_DEBUG
else
OBJ_DIR := PPC440gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440sfdiab_DEBUG
else
OBJ_DIR := PPC440sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440sfgnu_DEBUG
else
OBJ_DIR := PPC440sfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC603diab_DEBUG
else
OBJ_DIR := PPC603diab
endif
endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC603gnu_DEBUG
else
OBJ_DIR := PPC603gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC604diab_DEBUG
else
OBJ_DIR := PPC604diab
endif
endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC604gnu_DEBUG
else
OBJ_DIR := PPC604gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXdiab_DEBUG
else
OBJ_DIR := PPC85XXdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXgnu_DEBUG
else
OBJ_DIR := PPC85XXgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXsfdiab_DEBUG
else
OBJ_DIR := PPC85XXsfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXsfgnu_DEBUG
else
OBJ_DIR := PPC85XXsfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC860sfdiab_DEBUG
else
OBJ_DIR := PPC860sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC860sfgnu_DEBUG
else
OBJ_DIR := PPC860sfgnu
endif
endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMLINUXdiab_DEBUG
else
OBJ_DIR := SIMLINUXdiab
endif
endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMLINUXgnu_DEBUG
else
OBJ_DIR := SIMLINUXgnu
endif
endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMNTdiab_DEBUG
else
OBJ_DIR := SIMNTdiab
endif
endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMNTgnu_DEBUG
else
OBJ_DIR := SIMNTgnu
endif
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMSPARCSOLARISdiab_DEBUG
else
OBJ_DIR := SIMSPARCSOLARISdiab
endif
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMSPARCSOLARISgnu_DEBUG
else
OBJ_DIR := SIMSPARCSOLARISgnu
endif
endif

ifeq ($(BUILD_SPEC),PPC32diab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC32gnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC403diab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC403gnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405diab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405gnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440diab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440gnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC603diab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC603gnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC604diab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC604gnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
SUBDIRS := $(PRJ_ROOT_DIR)/.git \
	 $(PRJ_ROOT_DIR)/.metadata \
	 $(PRJ_ROOT_DIR)/DTBetaFramework \
	 $(PRJ_ROOT_DIR)/DriverDTOnly \
	 $(PRJ_ROOT_DIR)/Robot \
	 $(PRJ_ROOT_DIR)/TestPrograms \
	 $(PRJ_ROOT_DIR)/WPILib \
	 $(PRJ_ROOT_DIR)/beta_framework
OBJECTS :=

PROJECT_TARGETS :=

SUB_OBJECTS := $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_DTInputs.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DTBetaFramework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/DriverDTOnly/$(OBJ_DIR)/robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle2.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GlobalData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_OutputManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriveAngle.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_SensorInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_DriverInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_GDDrivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/Robot/$(OBJ_DIR)/bhs_MutexRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/TestPrograms/$(OBJ_DIR)/bhs_PidTuning.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Servo.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/GearTooth.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTrigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Solenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogChannel.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicColorSensor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/MotorSafetyHelper.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Encoder.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotDrive.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_I2C.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DoubleSolenoid.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SimpleRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/KinectStick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogPotentiometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/RobotBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ErrorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Error.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/IterativeRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalSource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationLCD.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/CANJaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SerialPort.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Ultrasonic.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Watchdog.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStationEnhancedIO.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Gyro.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalOutput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Module.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Resource.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DriverStation.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/HiTechnicCompass.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Utility.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/InterruptableSensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Relay.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Accelerometer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Talon.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/DigitalInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Kinect.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Dashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Timer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Counter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Compressor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/PIDController.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Jaguar.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Victor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SolenoidBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/ADXL345_SPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/AnalogModule.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SafePWM.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/SensorBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Joystick.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Notifier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/$(OBJ_DIR)/Preferences.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Target.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Robot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Limit.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Actuator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_PID.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_MutextRobot.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Autonomous.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Manipulator.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Drivetrain.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_VisionInput.o \
	 $(WS_ROOT_DIR)/frc1885-2014/beta_framework/$(OBJ_DIR)/bhs_Compressor.o
SUB_TARGETS :=
endif

PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0

ifeq ($(BUILD_SPEC),PPC32diab)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC32gnu)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mhard-float -mstrict-align -mno-implicit-fp -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC32sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC32sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -msoft-float -mstrict-align
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC403diab)
VX_CPU_FAMILY = ppc
CPU = PPC403
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC403FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC403gnu)
VX_CPU_FAMILY = ppc
CPU = PPC403
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=403 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC405diab)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC405FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC405gnu)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=405 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC405sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC405FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC405sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=405 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC440diab)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC440FH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC440gnu)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=440 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC440sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC440FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC440sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=440 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC603diab)
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC603FH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC603gnu)
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I.. C:/WindRiver/WPILib -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC604diab)
VX_CPU_FAMILY = ppc
CPU = PPC604
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC604FH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC604gnu)
VX_CPU_FAMILY = ppc
CPU = PPC604
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=604 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXdiab)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCE500FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXgnu)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=8540 -mstrict-align -msoft-float -mabi=no-spe
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCE500FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=8540 -mstrict-align -msoft-float -mabi=no-spe
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC860sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC860
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC860FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),PPC860sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC860
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=860 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),SIMLINUXdiab)
VX_CPU_FAMILY = simlinux
CPU = SIMLINUX
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tX86LH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),SIMLINUXgnu)
VX_CPU_FAMILY = simlinux
CPU = SIMLINUX
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mtune=i486 -march=i486
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),SIMNTdiab)
VX_CPU_FAMILY = simpc
CPU = SIMNT
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tX86LH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),SIMNTgnu)
VX_CPU_FAMILY = simpc
CPU = SIMNT
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mtune=i486 -march=i486
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
VX_CPU_FAMILY = simso
CPU = SIMSPARCSOLARIS
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tSPARCFH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif

ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
VX_CPU_FAMILY = simso
CPU = SIMSPARCSOLARIS
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = 
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 
endif


ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space -Wa,-Xmnem-mit -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space -Wa,-Xmnem-mit -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif





-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
