//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TSCH3DLightingPackageData
- (Color_1703f521)ambientColorAtIndex:(unsigned long long)arg1;
- (struct Vector3)attenuationAtIndex:(unsigned long long)arg1;
- (int)coordinateSpaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (float)cutOffAngleAtIndex:(unsigned long long)arg1;
- (Color_1703f521)diffuseColorAtIndex:(unsigned long long)arg1;
- (struct Vector3)directionAtIndex:(unsigned long long)arg1;
- (float)dropOffRateAtIndex:(unsigned long long)arg1;
- (BOOL)enabledAtIndex:(unsigned long long)arg1;
- (float)intensityAtIndex:(unsigned long long)arg1;
- (NSString *)nameAtIndex:(unsigned long long)arg1;
- (NSString *)packageName;
- (struct Vector3)positionAtIndex:(unsigned long long)arg1;
- (Color_1703f521)specularColorAtIndex:(unsigned long long)arg1;
- (int)typeAtIndex:(unsigned long long)arg1;
@end
