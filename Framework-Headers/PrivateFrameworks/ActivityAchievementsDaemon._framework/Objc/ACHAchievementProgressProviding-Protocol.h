//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHTemplate, HKQuantity;

@protocol ACHAchievementProgressProviding <NSObject>
- (HKQuantity *)currentGoalQuantityForTemplate:(ACHTemplate *)arg1;
- (HKQuantity *)currentProgressQuantityForTemplate:(ACHTemplate *)arg1;
- (BOOL)providesProgressForTemplate:(ACHTemplate *)arg1;
@end

