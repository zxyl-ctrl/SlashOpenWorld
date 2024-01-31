#pragma once

#include "DrawDebugHelpers.h"


#define DRAW_SPHERE(Location, Color)  if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.0f, 12, Color, false, 5.0f);
#define DRAW_SPHERE_SingleFrame(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.0f, 24, FColor::Red, false, -1.0f);

#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation,FColor::Red, true, 30.0f,0.0f,1.0f);
#define DRAW_LINE_SingleFrame(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation,FColor::Red, false, -1.0f,0.0f,1.0f);

#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(),Location,15.0f,FColor::Red, true);
#define DRAW_POINT_SingleFrame(Location) if(GetWorld()) DrawDebugPoint(GetWorld(),Location,15.0f,FColor::Red, false, -1.0f);

#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld())\
{\
	DrawDebugLine(GetWorld(), StartLocation, EndLocation,FColor::Red, true, 30.0f,0.0f,1.0f);\
	DrawDebugPoint(GetWorld(),EndLocation,15.0f,FColor::Red, true);\
}
#define DRAW_VECTOR_SingleFrame(StartLocation, EndLocation) if(GetWorld())\
{\
	DrawDebugLine(GetWorld(), StartLocation, EndLocation,FColor::Red, false, -1.0f,0.0f,1.0f);\
	DrawDebugPoint(GetWorld(),EndLocation,15.0f,FColor::Red, false,-1.0f);\
}