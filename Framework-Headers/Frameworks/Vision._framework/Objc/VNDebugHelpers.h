//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNDebugHelpers : NSObject
{
}

+ (float)computeNormalizedCosineDistanceOfFaceprint:(id)arg1 toFaceprint:(id)arg2;
+ (BOOL)doesAreaOverlapBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2 withOverlapRatioGreaterThan:(double)arg3;
+ (BOOL)doesAreaOverlapSignificantlyBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2;

@end
