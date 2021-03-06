//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class _HKMedicalIDData;

@protocol HKMedicalIDStoreServerInterface <NSObject>
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(_HKMedicalIDData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(void (^)(_HKMedicalIDData *, NSError *))arg1;
- (void)remote_fetchMedicalIDWithCompletion:(void (^)(_HKMedicalIDData *, NSError *))arg1;
- (void)remote_medicalIDClinicalContactsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_updateMedicalIDData:(_HKMedicalIDData *)arg1 lastFetchedMedicalIDData:(_HKMedicalIDData *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

