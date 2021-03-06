//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TSCH3DLightingPackageData
- (struct Color)ambientColorAtIndex:(unsigned long long)arg1;
- (struct Vector3)attenuationAtIndex:(unsigned long long)arg1;
- (long long)coordinateSpaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (float)cutOffAngleAtIndex:(unsigned long long)arg1;
- (struct Color)diffuseColorAtIndex:(unsigned long long)arg1;
- (struct Vector3)directionAtIndex:(unsigned long long)arg1;
- (float)dropOffRateAtIndex:(unsigned long long)arg1;
- (BOOL)enabledAtIndex:(unsigned long long)arg1;
- (float)intensityAtIndex:(unsigned long long)arg1;
- (NSString *)nameAtIndex:(unsigned long long)arg1;
- (NSString *)packageName;
- (struct Vector3)positionAtIndex:(unsigned long long)arg1;
- (struct Color)specularColorAtIndex:(unsigned long long)arg1;
- (long long)typeAtIndex:(unsigned long long)arg1;
@end

