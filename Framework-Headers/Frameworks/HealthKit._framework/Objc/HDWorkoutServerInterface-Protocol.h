//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKWorkout, HKWorkoutConfiguration, NSArray, NSData, NSDate, NSUUID, _HKActiveWorkoutServerConfiguration, _HKWorkoutSession;

@protocol HDWorkoutServerInterface <NSObject>
- (void)remote_activeWorkoutApplicationIdentifier:(void (^)(NSString *, NSError *))arg1;
- (void)remote_addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_associateSamplesWithUUIDs:(NSData *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_attachWorkoutServerWithClient:(id)arg1 serverConfiguration:(_HKActiveWorkoutServerConfiguration *)arg2 handler:(void (^)(id, BOOL, NSError *))arg3;
- (void)remote_freezeLocationSeriesWithUUIDs:(NSData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_generateWorkoutMarkerWithDate:(NSDate *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(void (^)(_HKFirstPartyWorkoutSnapshot *, NSError *))arg1;
- (void)remote_hasAnyActiveWorkouts:(void (^)(BOOL, NSError *))arg1;
- (void)remote_pauseAllActiveWorkoutsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_pauseWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_replaceWorkout:(HKWorkout *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_resumeWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_startWatchAppWithWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_startWorkoutSession:(_HKWorkoutSession *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_stopWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

