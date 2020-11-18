//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKObjectType, HKQuantity, NSArray, NSPredicate, NSString;

@protocol HDUtilityServerInterface <NSObject>
- (void)remote_createFakeAppleSourceWithBundleIdentifier:(NSString *)arg1 name:(NSString *)arg2 productType:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)remote_dropEntitlement:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_fetchAllDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchDiagnosticsWithKeys:(NSArray *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)remote_generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)remote_observeDataCollectionForType:(HKObjectType *)arg1 interval:(double)arg2 inBackground:(BOOL)arg3 hasRunningWorkout:(BOOL)arg4;
- (void)remote_resetAWDTask:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_restoreEntitlement:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_runAWDTask:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_saveDataObjects:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 sourceVersion:(NSString *)arg3 handler:(void (^)(BOOL, NSError *))arg4;
- (void)remote_select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSPredicate *)arg3 groupBy:(NSArray *)arg4 orderBy:(NSArray *)arg5 limit:(long long)arg6 completion:(void (^)(NSArray *, NSArray *, BOOL, NSError *))arg7;
- (void)remote_setShouldIgnoreUnlockedState:(BOOL)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_startFakingDataWithActivityType:(long long)arg1 speed:(HKQuantity *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_stopFakingDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_stopObservingDataCollectionForType:(HKObjectType *)arg1;
@end

