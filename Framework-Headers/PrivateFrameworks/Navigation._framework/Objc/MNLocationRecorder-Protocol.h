//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class CLLocation, NSDate, NSError;

@protocol MNLocationRecorder <NSObject>
- (void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(NSDate *)arg4;
- (void)recordError:(NSError *)arg1;
- (void)recordInitialCourse:(double)arg1;
- (void)recordLocation:(CLLocation *)arg1 correctedLocation:(CLLocation *)arg2;
- (void)recordLocationUpdatePause;
- (void)recordLocationUpdateResume;
- (void)recordVehicleHeading:(double)arg1 timestamp:(NSDate *)arg2;
- (void)recordVehicleSpeed:(double)arg1 timestamp:(NSDate *)arg2;
@end

