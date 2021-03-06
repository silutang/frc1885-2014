#ifndef BHS_GLOBAL_DATA_H_
#define BHS_GLOBAL_DATA_H_

#include "bhs_Constants.h"
#include "bhs_GDDrivetrain.h"
#include "bhs_GDIntake.h"
#include "bhs_GDShooter.h"

class bhs_GlobalData
	: public bhs_GDDrivetrain
	, public bhs_GDIntake
	, public bhs_GDShooter
{
	public:
		bhs_GlobalData();
		
		bool mda_goalHot;	// TEMPORARY until data structure developed for comms and vision data
		int mda_goalStatus; // 0 - off, 1 - left, 2 - right
		float md_pressureLevel;
		float md_arduinoDistance;
};

#endif // BHS_GLOBAL_DATA_H_
