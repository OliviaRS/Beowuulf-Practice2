// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ConveyorOff.h"
#include "Commands/ConveyorOn.h"
#include "Commands/IntakeOff.h"
#include "Commands/IntakeOn.h"
#include "Commands/Shift.h"
#include "Commands/ShooterOff.h"
#include "Commands/ShooterOn.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	driver = new Joystick(1);
	
	dButtonY = new JoystickButton(driver, 4);
	dButtonY->WhileHeld(new ShooterOn());
	dButtonX = new JoystickButton(driver, 3);
	dButtonX->WhileHeld(new ConveyorOn());
	dButtonA = new JoystickButton(driver, 1);
	dButtonA->WhileHeld(new IntakeOn());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("IntakeOn", new IntakeOn());
	SmartDashboard::PutData("IntakeOff", new IntakeOff());
	SmartDashboard::PutData("ConveyorOn", new ConveyorOn());
	SmartDashboard::PutData("ConveyorOff", new ConveyorOff());
	SmartDashboard::PutData("ShooterOff", new ShooterOff());
	SmartDashboard::PutData("ShooterOn", new ShooterOn());
	SmartDashboard::PutData("Shift", new Shift());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getDriver() {
	return driver;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
