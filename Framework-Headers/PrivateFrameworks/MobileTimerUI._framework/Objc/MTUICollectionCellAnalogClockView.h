//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimerUI/MTUIAnalogClockView.h>

@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView
{
}

+ (double)faceRadius;
+ (struct CGPoint)handRotationalCenterForHand:(long long)arg1;
+ (double)hourHandLength;
+ (double)hourHandWidth;
+ (id)makeClockFaceForDaytime:(BOOL)arg1;
+ (double)minuteHandLength;
+ (double)minuteHandWidth;
+ (double)overHourHandDotSize;
+ (double)overSecondHandDotSize;
+ (double)secondHandMainLength;
+ (double)secondHandOverhangLength;
+ (double)secondHandWidth;
+ (BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2;
+ (long long)style;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

