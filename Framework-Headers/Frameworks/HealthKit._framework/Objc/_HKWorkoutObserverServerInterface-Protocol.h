//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@protocol _HKWorkoutObserverServerInterface <NSObject>
- (void)remote_startTaskServerIfNeeded;
- (void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(void (^)(void))arg1;
@end

