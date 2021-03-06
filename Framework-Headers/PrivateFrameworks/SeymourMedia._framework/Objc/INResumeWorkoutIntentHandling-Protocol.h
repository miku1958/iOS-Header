//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SeymourMedia/NSObject-Protocol.h>

@class INResumeWorkoutIntent;

@protocol INResumeWorkoutIntentHandling <NSObject>
- (void)handleResumeWorkout:(INResumeWorkoutIntent *)arg1 completion:(void (^)(INResumeWorkoutIntentResponse *))arg2;

@optional
- (void)confirmResumeWorkout:(INResumeWorkoutIntent *)arg1 completion:(void (^)(INResumeWorkoutIntentResponse *))arg2;
- (void)resolveWorkoutNameForResumeWorkout:(INResumeWorkoutIntent *)arg1 withCompletion:(void (^)(INSpeakableStringResolutionResult *))arg2;
@end

