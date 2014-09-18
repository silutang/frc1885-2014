#include "bhs_GDShooter.h"

bhs_GDShooter::bhs_GDShooter() {
	mds_wenchLimit = false;
	
	mds_highGoalIn = false;
	mds_highGoalOut = false;
	mds_lowGoal = false;
	mds_wench = false;
	mds_engageWench = false;
	//Changed
	mds_doubleShot = false;
	
	//4/24/14
	mds_ball_catch = false;
	mds_ball_catch_state = true;
	
	mds_wenchOutput = 0;
	mds_highGoalOutput = DoubleSolenoid::kOff;
	mds_catchOutput = DoubleSolenoid::kForward;
}
