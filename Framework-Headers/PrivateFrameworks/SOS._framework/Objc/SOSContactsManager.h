//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, NSArray, SOSLegacyContactsManager;
@protocol OS_dispatch_semaphore;

@interface SOSContactsManager : NSObject
{
    int _healthContactsNotificationToken;
    SOSLegacyContactsManager *_legacyContactsManager;
    NSArray *_medicalIDEmergencyContacts;
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_semaphore> *_medicalIDContactsInitialStateSemaphore;
    struct _opaque_pthread_mutex_t _medicalIDEmergencyContactsMutex;
}

@property (readonly, nonatomic) BOOL SOSContactsExist;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (readonly, nonatomic) SOSLegacyContactsManager *legacyContactsManager;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore; // @synthesize medicalIDContactsInitialStateSemaphore=_medicalIDContactsInitialStateSemaphore;
@property (strong, nonatomic) NSArray *medicalIDEmergencyContacts; // @synthesize medicalIDEmergencyContacts=_medicalIDEmergencyContacts;
@property (nonatomic) struct _opaque_pthread_mutex_t medicalIDEmergencyContactsMutex; // @synthesize medicalIDEmergencyContactsMutex=_medicalIDEmergencyContactsMutex;

+ (BOOL)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
- (void).cxx_destruct;
- (id)SOSContactDestinations;
- (void)SOSContactsWithTimeout:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_isEmergencyNumber:(id)arg1;
- (void)_medicalContactsDidChange;
- (void)_medicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_userDefaults;
- (void)_waitForMedicalIDInitialState;
- (void)dealloc;
- (void)fetchMedicalIDEmergencyContacts;
- (BOOL)hasValidContactsToMessage;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)phoneNumbersToMessage;

@end
