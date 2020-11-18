//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMWorkoutManagerInternal;
@protocol CMWorkoutManagerDelegate;

@interface CMWorkoutManager : NSObject
{
    CMWorkoutManagerInternal *_internal;
}

@property (readonly, nonatomic) CMWorkoutManagerInternal *_internal; // @synthesize _internal;
@property (nonatomic) id<CMWorkoutManagerDelegate> delegate;

+ (BOOL)isAvailable;
- (void)dealloc;
- (id)init;
- (void)setSuggestedStopTimeout:(double)arg1;
- (void)startWorkout:(id)arg1;
- (void)stopWorkout:(id)arg1;
- (unsigned long long)supportedMetricsForWorkoutType:(long long)arg1;
- (void)userDismissedWorkoutAlert;

@end

