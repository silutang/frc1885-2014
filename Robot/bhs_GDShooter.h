#ifndef BHS_GD_SHOOTER_H_
#define BHS_GD_SHOOTER_H_

#include "Relay.h"
#include "DoubleSolenoid.h"

#include "bhs_Constants.h"

class bhs_GDShooter {
public:
	bhs_GDShooter();

	bool mds_wenchLimit;
	
	bool mds_highGoalIn;
	bool mds_highGoalOut;
	bool mds_lowGoal;
	bool mds_wench;
	bool mds_engageWench;
	//Changed
	bool mds_doubleShot;
	
	//4/24/14 adding shooter lock
	bool mds_ball_catch;
	bool mds_ball_catch_state;
	
	float mds_wenchOutput;
	DoubleSolenoid::Value mds_highGoalOutput;
	DoubleSolenoid::Value mds_catchOutput;
};

#endif        // BHS_GD_SHOOTER_H_
