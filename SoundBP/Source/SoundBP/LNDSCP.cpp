// Fill out your copyright notice in the Description page of Project Settings.


#include "LNDSCP.h"
//#include "EngineUtils.h"
//#include "Landscape.h"
//#include "LandscapeInfo.h"
//#include "LandscapeEditorUtils.h"

// Sets default values
ALNDSCP::ALNDSCP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALNDSCP::BeginPlay()
{
	Super::BeginPlay();
}



//float ALNDSCP::CreateLandscape(ALandscape* landscape, TArray<float> spectrogram_values)
//{
//
//	UWorld* world = landscape->GetWorld();
//
//
//	if (landscape != nullptr)
//	{
//		// 2: ULandscapeInfo
//		ULandscapeInfo::RecreateLandscapeInfo(world, false);
//
//		// 3: Landscape
//		FIntRect rect = landscape->GetBoundingRect();
//		int32 w = rect.Width() + 1;
//		int32 h = rect.Height() + 1;
//
//		// 4: Heightmap
//		TArray<uint16> Data;
//		int counter = 0;
//
//		Data.Init(0, w * h);
//		for (int32 x = 0; x < w; x++)
//		{
//			for (int32 y = 0; y < h; y++)
//			{
//				float height = spectrogram_values[x * w + y];
//
//				counter++;
//				Data[x * h + y] = static_cast<uint16>(FMath::FloorToInt(32767 + height * 1000.0f));
//			}
//		}
//
//		// 5: Heightmap
//		LandscapeEditorUtils::SetHeightmapData(landscape, Data);
//		return static_cast<float>(spectrogram_values.Num());
//	}
//	return 0;
//
//
//
//
//
//
//
//}


// Called every frame
void ALNDSCP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

