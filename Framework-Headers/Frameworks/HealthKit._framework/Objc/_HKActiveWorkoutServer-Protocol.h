//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDate;

@protocol _HKActiveWorkoutServer <NSObject>
- (void)remote_activateWorkoutWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_endWorkoutWithEndDate:(NSDate *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_nukeWorkoutWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_pauseWorkoutWithDate:(NSDate *)arg1 userInitiated:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_resumeWorkoutWithDate:(NSDate *)arg1 userInitiated:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

