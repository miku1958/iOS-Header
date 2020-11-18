//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, _HKMedicalIDData;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;
    HKTaskServerProxyProvider *_setupStatusProxyProvider;
    _HKMedicalIDData *_lastFetchedMedicalIDData;
    struct os_unfair_lock_s _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long medicalIDSetUpStatus;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)setupStatusClientInterface;
+ (id)setupStatusServerInterface;
+ (id)setupStatusTaskIdentifier;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (void)fetchMedicalIDClinicalContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)lastFetchedMedicalIDData;
- (id)remoteInterface;
- (void)setLastFetchedMedicalIDData:(id)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
