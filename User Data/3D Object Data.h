///////////////////////////////////////////////////////////
//  3D Object Data.h
//  Implementation of the Class 3D Object Data
//  Created on:      21-Nov-2018 21:19:45
//  Original author: Magneto
///////////////////////////////////////////////////////////

#if !defined(EA_C2D76689_2AFB_40e3_A1CE_7565FF77DE3E__INCLUDED_)
#define EA_C2D76689_2AFB_40e3_A1CE_7565FF77DE3E__INCLUDED_

#include "VRENAR Monetisable User Data.h"

class 3D Object Data : public VRENAR Monetisable User Data
{

public:
	class Art : public 3D Object Data
	{

	public:
		Art();
		virtual ~Art();

	};

	class Physical : public 3D Object Data
	{

	public:
		Physical();
		virtual ~Physical();

	};


	3D Object Data();
	virtual ~3D Object Data();

};
#endif // !defined(EA_C2D76689_2AFB_40e3_A1CE_7565FF77DE3E__INCLUDED_)
