#pragma config(StandardModel, "RVW SQUAREBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*+++++++++++++++++++++++++++++++++++++++++++++| Notes |++++++++++++++++++++++++++++++++++++++++++++++
Moving Forward
This program instructs your robot to move forward at full power for three seconds.
There is a two second pause at the beginning of the program.

Robot Model(s): Squarebot

[I/O Port]          [Name]              [Type]                [Description]
Motor Port 2        rightMotor          VEX Motor             Right side motor
Motor Port 3        leftMotor           VEX Motor             Left side motor

*To run this sample program on Swervebot, be sure to Reverse Motor Port 3 in the Motors and Sensors
 Setup, and to make sure that Motor Port 2 is NOT Reversed.
----------------------------------------------------------------------------------------------------*/


//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	wait1Msec(2000);						// Robot waits for 2000 milliseconds before executing program
	short motorSpeed;
	motorSpeed = 127;
	// Move forward at full power for 3 seconds
	motor[rightMotor] = motorSpeed;		  // Motor on port2 is run at full (127) power forward
	motor[leftMotor]  = motorSpeed;		  // Motor on port3 is run at full (127) power forward

	wait1Msec(9500);  // Robot runs previous code for 3000 milliseconds before moving on

	turnLeft(365, degrees, 100);
	wait1Msec(1000);

	motor[rightMotor] = motorSpeed;
	motor[leftMotor]  = motorSpeed;
	wait1Msec(6000);

	turnLeft(365, degrees, 100);
	wait1Msec(1000);


	motor[rightMotor] = motorSpeed;
	motor[leftMotor]  = motorSpeed;
	wait1Msec(9500);

	turnRight(365, degrees, 100);
	wait1Msec(1000);

	motor[rightMotor] = motorSpeed;
	motor[leftMotor]  = motorSpeed;
	wait1Msec(3000);

	}												        // Program ends, and the robot stops
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
