#define true 							1
#define false 						0

// type scope
#define private 					0
#define protected 				1
#define public 						2

#define ReadAndWrite 			0 //! any modifications enabled
#define ReadAndCreate 		1 //! only adding new class members is allowed
#define ReadOnly 					2 //! no modifications enabled
#define ReadOnlyVerified 	3 //! no modifications enabled, CRC test applied

#define LockNo						0
#define LockCadet					1
#define LockYes						2

#define SPEED_STATIC 			1e10

#define NEVER_DESTROY 		1000	// for MP - destroying dead bodies