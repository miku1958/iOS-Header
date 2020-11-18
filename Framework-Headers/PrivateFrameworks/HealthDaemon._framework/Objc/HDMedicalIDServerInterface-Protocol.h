//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class _HKMedicalIDData;

@protocol HDMedicalIDServerInterface <NSObject>
- (void)remote_deleteMedicalIDDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(void (^)(_HKMedicalIDData *, NSError *))arg2;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_updateMedicalIDData:(_HKMedicalIDData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

